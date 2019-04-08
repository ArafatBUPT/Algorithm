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
public:
    void Mirror(TreeNode *pRoot) {

        //递归终止
        if(pRoot==NULL)
            return;
        // 用tmep指向左边 保存
        TreeNode* temp=pRoot->left;
        pRoot->left=pRoot->right;
        pRoot->right=temp;

        Mirror(pRoot->left);
        Mirror(pRoot->right);
    }
};

