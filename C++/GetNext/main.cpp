#include <iostream>

struct TreeLinkNode {
    int val;
    struct TreeLinkNode *left;
    struct TreeLinkNode *right;
    struct TreeLinkNode *next;
    TreeLinkNode(int x) :val(x), left(NULL), right(NULL), next(NULL) {

    }
};


class Solution {
private:
    TreeLinkNode* RootNext(TreeLinkNode* node){

        if(node->right== nullptr)
            return nullptr;
        node=node->right;
        while (node->left!= nullptr)
            node=node->left;
        return node;
    }
public:
    TreeLinkNode* GetNext(TreeLinkNode* pNode){
        //如果是根节点进入RootNext
        if(pNode->next== nullptr){
            return RootNext(pNode);
        }
        //如果节点右边不为空 找到右边的下一个遍历点
        else if(pNode->right!= nullptr) {
            pNode=pNode->right;
            while (pNode->left!= nullptr)
                pNode=pNode->left;
            return pNode;
        } else {
            //以下是节点右为空
            //可能是上一个节点的左孩子或者是右孩子
            if (pNode->next->left==pNode)//如果是左孩子 返回父亲节点
                return pNode->next;
            else{
                //如果是右孩子 判断是在根节点的左边还是右边
                TreeLinkNode* target=pNode;
                while (pNode->next!= nullptr)
                    pNode=pNode->next;
                TreeLinkNode* root=pNode;
                while (pNode->right!= nullptr)//遍历到根 然后向右寻找是不是最后节点
                    pNode=pNode->right;
                if (pNode==target)//如果输入的节点是最后节点 返回空
                    return nullptr;
                else
                    return root;//如果不是最后节点 返回根
            }
        }
    }
};

