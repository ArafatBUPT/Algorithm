#include <iostream>
#include "vector"
#include "queue"
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
    vector<vector<int> > Print(TreeNode *pRoot) {
        //res存record 返回 ; record存每一层的结果
        vector<vector<int>> res;
        vector<int> record;
        //q1,q2双队列
        queue<TreeNode *> q1;
        queue<TreeNode *> q2;

        if (pRoot == nullptr) return res;
        //根存入q1
        q1.push(pRoot);
        while (!q1.empty() || !q2.empty() ){
            if(!q1.empty()){
                while (!q1.empty()){//q1不为空 q2必定为空
                    record.push_back(q1.front()->val);//每个节点存到record   左右节点非空才存入队列
                    if(q1.front()->left!= nullptr) q2.push(q1.front()->left);
                    if(q1.front()->right!=nullptr) q2.push(q1.front()->right);
                    q1.pop();
                }//存到res中 清空record
                res.push_back(record);
                record.clear();
            } else{
                while (!q2.empty()){
                    record.push_back(q2.front()->val);
                    if(q2.front()->left!= nullptr) q1.push(q2.front()->left);
                    if(q2.front()->right!=nullptr) q1.push((q2.front()->right));
                    q2.pop();
                }
                res.push_back(record);
                record.clear();
            }
        }
        return  res;
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
    for (int i = 0; i <vector.size() ; ++i) {
        for (int j = 0; j < vector[i].size(); ++j) {
            cout <<'{'<< vector[i][j] << ' ';
        }
    }

        return 0;
}
