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
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2){

        //其中一个是空 返回非空链表
        if (pHead1 == NULL)
            return pHead2;
        if(pHead2 == NULL)
            return pHead1;

        ListNode* head;
        ListNode*node;
        ListNode* i;
        ListNode* j;

       /* head指向两个链表第一元素最小的头
        node指向head 改变node下一个元素
        i指向head 的下一个
        j指向 非head指向的另一个链表头*/

        if(pHead1->val<pHead2->val) {
            head = pHead1;
            node = head;
            i = head->next;
            j = pHead2;
        }
        else{
            head = pHead2;
            node = head;
            i = head->next;
            j = pHead1;
        }

       // 利用i,j遍历两个链表 i,j哪个值小 node->next指向哪一个
        while (true) {
            if (i == NULL) {
                node->next = j;
                break;
            } else if (j == NULL) {
                node->next = i;
                break;
            } else if (i->val < j->val) {
                node->next = i;
                i=i->next;
                node = node->next;
            } else {
                node->next = j;
                j=j->next;
                node = node->next;
            }
        }

        return head;
    }
};
