#include <iostream>
#include "string"
#include "vector"
#include "set"
using namespace std;

class Solution {
private:
    vector<bool> used;//used 记录元素有没有被访问

    //                        原字符串str   索引从1开始      p存每次的结果        res存放每次的结果p
    void generatePermutation(const string str,int index,string &p,vector<string> &res) {
        //Index等于字符串长度时  已经得到一次解  并存到res中
        if (index == str.length()) {
            res.push_back(p);
            return;
        }
        //遍历str 判断当前i有没有被访问 如果没被访问 存到P中
        for (int i = 0; i < str.length(); ++i) {
            if (!used[i]) {
                p.push_back(str[i]);
                used[i] = true;
                generatePermutation(str, index + 1, p,res);
                //回溯时 把当前元素退回去 并且把状态设成未访问
                p.pop_back();
                used[i] = false;
            }
        }
    }

public:
    vector<string> Permutation(string str) {
        vector<string> res;

        if (str.length() == 0)
            return res;
        if (str.length() == 1) {
            res.push_back(str);
            return res;
        }
        string p;
        used = vector<bool>(str.length(), false);//初始化 used
        generatePermutation(str,0,p,res);
        set<string> s(res.begin(),res.end());//去掉重复答案
        vector<string> result(s.begin(),s.end());
        return result;
    }
};

