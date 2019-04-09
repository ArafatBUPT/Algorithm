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
private:
    int findLeftRightDepth(TreeNode* root){

        if(root== nullptr)
            return 0;
        if(root->left== nullptr && root->right== nullptr)
            return 1;
        //返回该节点的深度
        return max(findLeftRightDepth(root->left)+1,findLeftRightDepth(root->right)+1);
    }
public:
    bool IsBalanced_Solution(TreeNode* pRoot) {
        //递归到底了返回true
        if (pRoot== nullptr)
            return true;
        //该节点的高度差绝对值大于1 返回false
        if(abs(findLeftRightDepth(pRoot->left)-findLeftRightDepth(pRoot->right))>1)
            return false;
        //递归左右节点的高度差
        return IsBalanced_Solution(pRoot->left) && IsBalanced_Solution(pRoot->right);
    }
};

int main(){

    auto node1 = new TreeNode(1);
    auto node2 = new TreeNode(2);
    auto node3 = new TreeNode(3);
    auto node4 = new TreeNode(4);
    auto node5 = new TreeNode(5);
    auto node6 = new TreeNode(6);
    auto node7 = new TreeNode(7);
    auto node8 = new TreeNode(8);

    node1->left=node2;
    node1->right=node3;
    node2->left=node4;
    node2->right=node5;
    node5->left=node6;

    Solution s;
    if(s.IsBalanced_Solution(node1))
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;

}


