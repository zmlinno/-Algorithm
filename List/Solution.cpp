#define _CRT_SECURE_NO_WARNINGS
#include"ListNode.h"

class Solution
{
public:
	ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
	{
		ListNode dummy(0);
		ListNode* tail = &dummy;

		while (pHead1 && pHead2)
		{
			if (pHead1->val < pHead2->val)
			{
				tail->next = pHead1;
				pHead1 = pHead1->next;

			}
			else
			{
				tail->next = pHead2;
				pHead2 = pHead2->next;
			}
			tail = tail->next;
		}
		if (pHead1)tail->next = pHead1;
		else tail->next = pHead2;

		return dummy.next;
	}
};