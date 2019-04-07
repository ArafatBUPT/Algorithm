#include <iostream>
#include "vector"
#include "stack"
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x){
        this->val=x;
        this->next=NULL;
    }
};

class Solution{
public:
    vector<int> printListFromTailToHead(ListNode* head){
        vector<int> res;
        if(head==NULL)
            return res;
        stack<int> stack;
        //遍历一遍 每次把元素存储到栈里
        ListNode* node=head;
        while (node!=NULL){
            stack.push(node->val);
            node=node->next;
        }
        int n=0;
        //从栈弹出并保存到res
        while (!stack.empty()){
            n=stack.top();
            res.push_back(n);
            stack.pop();
        }
        return res;
    }
};

