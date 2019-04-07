#include <iostream>
#include "string.h"

using namespace std;
class Solution {
public:
    void replaceSpace(char *str,int length)
        //用传来的str指针 初始化一个string s
        string s(str);
        int i=0;

        /*找到空格的位置
        find(要查找的字符串，从i位置开始)
        如果找不到 find()返回 string::npos*/

        while ((i=s.find(' ',i))!=string::npos)){
            //删除空格 当前i指向空格位置
            //ease(起始位置，几个元素)
            s.erase(i,1);
            //i位置插入%20
            s.insert(i,"%20");
        }

        //c_str()  返回coust char* 指针
        const char* res=s.c_str();
        // strcpy() res复制到str
        strcpy(str,res);
    }
};

