#pragma once
#ifndef  LISTNODE_H
#define LISTNODE_H
//LeetCode
struct ListNode
{
	int val;
	ListNode* next;

	ListNode(int x):val(x),next(nullptr){}
};
#endif // ! LISTNODE_H

