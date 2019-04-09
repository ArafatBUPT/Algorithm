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

    TreeNode* head= nullptr;
    TreeNode* realHead=nullptr;
    void ConvertSub(TreeNode* node){
        //递归终止
        if(node==nullptr)
            return;

        //中序遍历
        ConvertSub(node->left);
        //realHead指向最小元素 head变量一直指向上一个元素
        if(head== nullptr){
            head=node;
            realHead=node;
        }
        else{
            //上一个元素的右边接当前元素 当前的左边接上一个元素 head更新为当前元素
            head->right=node;
            node->left=head;
            head=node;
        }
        ConvertSub(node->right);

    }
public:
    TreeNode* Convert(TreeNode* pRootOfTree){
        TreeNode* pre= nullptr;

        ConvertSub(pRootOfTree);

        return realHead;
    }
};

