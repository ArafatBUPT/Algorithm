#include <iostream>
#include "queue"

using namespace std;
class Solution {
public:
    void reOrderArray(vector<int> &array) {

        if (array.size()==0||array.size()==1)
            return;

        queue<int> even;
        //把偶数都存到even队列中
        vector<int>::iterator cur;
        /* 每次遍历到偶数 存到even并且删除该元素
        注意使用erase函数 迭代器返回被删除元素的下一位置
        所以不用cur++*/
        for (cur=array.begin();cur!=array.end();) {
            if (!(*cur%2)){
                even.push(*cur);
                array.erase(cur);
            }
            else
                cur++;
        }
        //把队列中的元素依次添加到原vector
        while (!even.empty()){
            array.push_back(even.front());
            even.pop();
        }
    }
};
