#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"ListNode.h"
#include"Solution.cpp"
using namespace std;

//工具函数
ListNode* createList(const std::initializer_list<int>& vals)
{
	ListNode dummy(0);
	ListNode* tail = &dummy;
	for (int v : vals)
	{
		tail->next = new ListNode(v);
		tail = tail->next;
	}
	return dummy.next;
}


//工具函数
void printList(ListNode* head)
{
	while (head)
	{
		cout << head->val;
		if (head->next)cout << "->";
		head = head->next;
	}
	cout << endl;
}


int main()
{
	//构建两个链表
	ListNode* l1 = createList({ 1,3,4 });
	ListNode* l2 = createList({ 2,4,6 });

	//合并
	Solution s;
	ListNode* merged = s.Merge(l1,l2);

	cout << "Merged List:";
	printList(merged);
	return 0;
}