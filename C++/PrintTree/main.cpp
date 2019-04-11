#include <iostream>
#include "vector"
#include "stack"
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
    vector<vector<int>> Print(TreeNode* pRoot) {
        // record存储每行的数据 res存储最后结果 stack1存基数  stack2存偶数  even偶数时 true
        stack<TreeNode*>stack1;
        stack<TreeNode*>stack2;
        vector<int> record;
        vector<vector<int>> res;

        if(pRoot!= nullptr)
            stack1.push(pRoot);
        bool even = false;

        while (!stack1.empty() || !stack2.empty()) {
            if (!even) {//基数
                while (!stack1.empty()) {
                    if(stack1.top()->left!= nullptr)
                        stack2.push(stack1.top()->left);//先存左 再存右
                    if(stack1.top()->right!= nullptr)
                        stack2.push(stack1.top()->right);
                    record.push_back(stack1.top()->val);
                    stack1.pop();//栈顶左右存完 pop
                }
                res.push_back(record);
                record.clear();
                even = true;
            } else{//偶数
                while (!stack2.empty()) {
                    if(stack2.top()->right!= nullptr)
                        stack1.push(stack2.top()->right);//先存右 再存左
                    if(stack2.top()->left!= nullptr)
                        stack1.push(stack2.top()->left);
                    record.push_back(stack2.top()->val);
                    stack2.pop();
                }
                res.push_back(record);
                record.clear();
                even = false;
            }
        }
        return res;
    }
};

int main() {

    TreeNode *node1 = new TreeNode(8);
    TreeNode *node2 = new TreeNode(6);
    TreeNode *node3 = new TreeNode(10);
    TreeNode *node4 = new TreeNode(5);
    TreeNode *node5 = new TreeNode(7);
    TreeNode *node6 = new TreeNode(9);
    TreeNode *node7 = new TreeNode(11);
    TreeNode *node8 = new TreeNode(8);
    TreeNode *node9 = new TreeNode(8);

    node1->left=node2;
    node1->right=node3;
    node2->left=node4;
    node2->right=node5;
    node3->left=node6;
    node3->right=node7;


    Solution s;

    vector<vector<int>> vector;
    vector=s.Print(node1);

}