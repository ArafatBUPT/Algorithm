#include <iostream>
#include "vector"
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
    vector<TreeNode*> res;
    void inOrder(TreeNode* root){

        if(root == nullptr)
            return;

        inOrder(root->left);

        res.push_back(root);

        inOrder(root->right);
    }
public:
    TreeNode *KthNode(TreeNode *root, int k) {
        if(k<=0 || root==nullptr)
            return nullptr;
        //中序遍历 存到vector 直接访问vector k-1元素
        inOrder(root);
        if(k>res.size())
            return nullptr;
        return res[k-1];
    }
};

