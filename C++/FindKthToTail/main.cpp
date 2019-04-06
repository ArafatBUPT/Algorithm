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

        ListNode* fast=pListHead;
        ListNode* slow=pListHead;
        int count=1;


        while (fast->next!=NULL){
            if (count>=k){
                slow=slow->next;
            }
            fast=fast->next;
            count++;
            if (fast->next==NULL && count<k)
                return NULL;
        }

        return slow;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}