#include <iostream>
#include "vector"
#include "stack"
using namespace std;

class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        if(pushV.size()==0 || popV.size()==0 || popV.size()!=pushV.size())
            return false;
        stack<int> s;
        for (int i = 0,j=0; i <pushV.size();) {
            //遍历入栈数组
            s.push(pushV[i++]);
            //入栈直到出栈元素 栈向前遍历 出栈数组往后遍历
            while (j < popV.size() && popV[j] == s.top()) {
                s.pop();
                j++;
            }
        }
        //最后都匹配上了 栈空了 返回True
        if(s.empty())
            return true;
        return false;
    }
};

