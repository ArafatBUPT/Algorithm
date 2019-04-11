#include <iostream>
#include "string"
#include "string.h"
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
    TreeNode* decode(char *&str) {
        if(*str=='#'){
            str++;
            return nullptr;
        }
        int num = 0;
        while(*str != ',')
            //个位百位获取数值
            num = num*10 + (*(str++)-'0');
        str++;
        //新建节点
        TreeNode *root = new TreeNode(num);
        //递归
        root->left = decode(str);
        root->right = decode(str);
        return root;
    }
public:
    char* Serialize(TreeNode *root) {
        // 空用#表示
        if(!root) return "#";
        //值存到r中','隔开
        string r = to_string(root->val);
        r.push_back(',');
        char *left = Serialize(root->left);
        char *right = Serialize(root->right);
        //ret递归返回
        char *ret = new char[strlen(left) + strlen(right) + r.size()];
        strcpy(ret, r.c_str());
        strcat(ret, left);
        strcat(ret, right);
        return ret;
    }
    TreeNode* Deserialize(char *str) {
        return decode(str);
    }
};




