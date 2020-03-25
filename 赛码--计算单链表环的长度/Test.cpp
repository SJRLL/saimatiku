#include<iostream>
using namespace std;

struct ListNode
{
	int val;
	ListNode* phead;
	ListNode* next;
};

bool IsExistLoop(ListNode* phead)
{
	ListNode* slow = phead;
	ListNode* fast = phead;

	while (slow && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
	}

	if (slow == fast)
	{
		return true;
	}
	return false;
}

ListNode* GetMeetingNode(ListNode* phead)
{
	//快慢指针找出环入口
	ListNode* slow = phead;
	ListNode* fast = phead;
	while (slow && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	if (slow == fast)
	{
		return slow ;
	}
	return NULL;
}

ListNode* GetEntryNodeLoop(ListNode* phead)
{
	ListNode* meetingNode = GetEntryNodeLoop(phead);
	if (meetingNode == NULL)
	{
		return NULL;
	}

	ListNode* p1 = meetingNode;
	ListNode* p2 = phead;

	while (p1 != p2)  //p1和p2以相同的速度向前运动，当p2指向环口的时候，p1以及围绕着环走了n圈又回到了入口节点
	{
		p1 = p1->next;
		p2 = p2->next;
	}
	return p1;
}

int GetLoopLength(ListNode* phead)
{
	ListNode* slow = phead;
	ListNode* fast = phead;
	while (slow &&fast->next)
	{
		slow = slow->next;
		fast = fast->next;
		if (slow == fast)
		{
			break;
		}
		slow = slow->next;
		fast = fast->next->next;
		int lenght = 1;
		while (fast != slow)
		{
			slow = slow->next;
			fast = fast->next->next;
			lenght++;
		}
		return lenght;
	}
}