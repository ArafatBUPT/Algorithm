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
    vector<int> PrintFromTopToBottom(TreeNode* root) {


        vector<int> res;

        if (root==NULL)
            return res;

        queue<TreeNode*> q;
        //使用队列 先把根存入队列中
        q.push(root);

        while (!q.empty()){
            // 左右节点不为空的节点存入队列
            if(q.front()->left!=NULL)
                q.push(q.front()->left);
            if(q.front()->right!=NULL)
                q.push(q.front()->right);
            //队首的元素添加到vector中 返回即可
            res.push_back(q.front()->val);
            q.pop();
        }
        return res;
    }
};
