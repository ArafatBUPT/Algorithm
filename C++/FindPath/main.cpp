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
    void find(TreeNode* node,int num,vector<int> &vec,vector<vector<int>> &res){
        if(node==NULL)
            return;

        //如果是子路径 而且是最后子节点 存储到res
        if (node->val==num&&node->right==NULL&&node->right==NULL) {
            vec.push_back(node->val);
            res.push_back(vec);
            vec.pop_back();
            return;
        }
        if(node->val<num)
            //每次递归 减去该节点的值 再向下传递
            vec.push_back(node->val);

        find(node->left,num-node->val,vec,res);
        find(node->right,num-node->val,vec,res);
        vec.pop_back();

    }
public:
    vector<vector<int>> FindPath(TreeNode* root,int expectNumber) {

        vector<vector<int>> res;
        vector<int> record;
        //record存每个子路径 res存总共路径
        find(root,expectNumber,record,res);
        return res;
    }
};

