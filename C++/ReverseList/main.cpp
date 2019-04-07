#include <iostream>


struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};


class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {
        // 空链表或者只有一个元素 返回头指针
        if (pHead == NULL || pHead->next == NULL)
            return pHead;
        //cur指向第一位
        //next指向第二位
        ListNode* cur = pHead;
        ListNode* next = cur->next;
        //第一位断开
        cur->next=NULL;
        while (next->next!=NULL){
/*           1      2    ->   3  ->  4  ->  5  ->  null
            cur     next     newN
            记录next的后一位
             next指向Cur  Cur再向前走一位*/
            ListNode* newNext= next->next;
            next->next=cur;
            cur=next;
            next=newNext;
        }
        next->next=cur;
        return next;
    }
};
