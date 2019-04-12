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
        //遍历PushV
        for (int i = 0,j=0; i <pushV.size() ;) {
            s.push(pushV[i++]);
            //每遍历PushV 和PopV的第J个元素比较 如果相等弹出 往后遍历PopV
            while (j < popV.size() && popV[j] == s.top() ){
                s.pop();
                j++;
            }
        }
        return s.empty();
    }
};

