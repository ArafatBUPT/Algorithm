#include <iostream>
#include "vector"

using namespace std;

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };


class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        //递归终止条件 传递的前序或者中序遍历为空
        if(pre.size()==0 || vin.size()==0)
            return NULL;
        //前序遍历的第一个元素，也就是根。
        TreeNode* root = new TreeNode(pre[0]);
        //遍历中序，找到根元素，分成两部分
        // 再调用自己找到左右子树
        for (int i = 0; i <vin.size(); ++i) {
            if(pre[0]==vin[i]){
                vector<int> l_pre = vector<int>(pre.begin() + 1, pre.begin() + i + 1);
                vector<int> l_in = vector<int>(vin.begin(), vin.begin() + i);
                vector<int> r_pre = vector<int>(pre.begin() + i + 1, pre.end());
                vector<int> r_in = vector<int>(vin.begin() + i + 1, vin.end());
                root->left = reConstructBinaryTree(l_pre, l_in);
                root->right = reConstructBinaryTree(r_pre, r_in);
            }
        }
        return root;
    }
};

