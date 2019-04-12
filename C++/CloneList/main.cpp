#include <iostream>

struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};


class Solution {
public:
    RandomListNode* Clone(RandomListNode* pHead) {
        if (pHead == nullptr)
            return nullptr;
        RandomListNode *cur = pHead;
        //遍历 复制原链表的值
        while (cur != nullptr) {
            RandomListNode *cloneNode = new RandomListNode(cur->label);
            cloneNode->next = cur->next;

            cur->next = cloneNode;

            cur = cloneNode->next;
        }
        //遍历 设置复制后的Random
        cur = pHead;
        while (cur != nullptr) {
            RandomListNode *cloneNode = cur->next;
            if (cur->random != nullptr)
                cloneNode->random = cur->random->next;
            cur = cloneNode->next;
        }
        //拆分
        cur = pHead;
        RandomListNode *temp;
        RandomListNode *cloneHead = pHead->next;
        while (cur->next != nullptr) {
            //每次拆一个位置
            temp = cur->next;
            cur->next = temp->next;
            cur = temp;
        }
        return cloneHead;
    }
};

