#include <iostream>
#include <stack>

using namespace std;


class Solution {
private:
    stack<int> mainStack;
    stack<int> minStack;
public:
    void push(int value) {
        //main栈正常入栈
        mainStack.push(value);
        if(minStack.empty())//min栈空 入栈 否则入栈元素比min栈顶相等或者大于Value 再进栈
            minStack.push(value);

        else if(minStack.top()>=value)
            minStack.push(value);
    }
    void pop() {
        if(mainStack.top()==minStack.top()){//main栈和min栈顶相等 同时出栈 否则min不出栈
            mainStack.pop();
            minStack.pop();
        }
        else
            mainStack.pop();

    }
    int top() {
        return mainStack.top();//返回栈顶
    }
    int min() {
        return minStack.top();//返回栈顶
    }
};

