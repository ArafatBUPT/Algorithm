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
    bool DoseTreeAhasTreeB(TreeNode* pRootA,TreeNode* pRootB){


        if(pRootB==NULL)
            return true;

        if(pRootA==NULL)
            return false;

        if(pRootA->val!=pRootB->val)
            return false;

        return DoseTreeAhasTreeB(pRootA->left,pRootB->left)&&DoseTreeAhasTreeB(pRootA->right,pRootB->right);


    }
public:
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2) {
        //flag记录状态 初始false
        bool flag=false;

        if(pRoot1!=NULL && pRoot2!=NULL) {
            flag = DoseTreeAhasTreeB(pRoot1, pRoot2);
            //如果当前值不相等 返回false

            //找到A和B相同的第一元素
            if (!flag)
                flag = HasSubtree(pRoot1->left, pRoot2);
            if (!flag)
                flag = HasSubtree(pRoot1->right, pRoot2);
        }
        return flag;

    }
};
