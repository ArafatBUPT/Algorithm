#include <iostream>

using namespace std;

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};

class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {

        if (pListHead==NULL||k==0){
            return NULL;
        }
        if (pListHead->next==NULL){
            return pListHead;
        }

        //快慢指针 count记录两个指针的距离 也就是K的值

        ListNode* fast=pListHead;
        ListNode* slow=pListHead;
        int count=1;


        //count等于K开始 慢指针开始走
        while (fast->next!=NULL){
            if (count>=k){
                slow=slow->next;
            }
            fast=fast->next;
            count++;

            //如果快指针到最后一位，K的值比链表元素多 返回NULL
            if (fast->next==NULL && count<k)
                return NULL;
        }

        return slow;
    }
};
