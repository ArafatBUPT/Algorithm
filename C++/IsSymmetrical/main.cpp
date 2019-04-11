#include <iostream>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};


class Solution {
private:
    bool isSymmetrical(TreeNode* left,TreeNode* right){

        //判断左右节点值是否相等 如果左空 判断右是不是也为空 空返回true  左非空 右空 false 
        if(left== nullptr)
            return right== nullptr;
        if(right== nullptr)
            return false;
        if(left->val!=right->val)
            return false;

        return isSymmetrical(left->left,right->right) && isSymmetrical(left->right,right->left);

    }
public:
    bool isSymmetrical(TreeNode* pRoot){

        if(pRoot== nullptr)
            return true;

        return isSymmetrical(pRoot->left,pRoot->right);
    }
};

