#include <iostream>
#include "stack"

using namespace std;

class Solution
{
public:
    void push(int node) {
        //每次push都存到stack1
        stack1.push(node);
    }

    int pop() {
        //出队列前 除了最底下元素以外的存到stack2
        while (stack1.size()!=1){
            stack2.push(stack1.top());
            stack1.pop();
        }
        //返回栈底元素
        int res=stack1.top();
        stack1.pop();
        //再存到stack1
        while (!stack2.empty()){
            stack1.push(stack2.top());
            stack2.pop();
        }
        return res;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};
