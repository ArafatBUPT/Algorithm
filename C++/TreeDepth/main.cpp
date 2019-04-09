#include <iostream>
using namespace std;

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
    int TreeDepth(TreeNode* pRoot){
        //空节点返回0
        if(pRoot==nullptr)
            return 0;
        //如果是子节点返回1
        if (pRoot->left== nullptr && pRoot->right== nullptr)
            return 1;
        //左右节点的返回值+1 就等于左右边的深度
        return max(TreeDepth(pRoot->left)+1,TreeDepth(pRoot->right)+1);
    }
};

