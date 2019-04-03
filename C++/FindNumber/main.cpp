#include <iostream>
#include <iostream>
#include "vector"
using namespace std;
//                  二维数组查找target
class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        //len 行数 i 列数  从左下第一个元素开始比较
        int len = array.size()-1;
        int i =0;

        // len i 在数组范围内
        while (len >= 0 && i < array[0].size() ){
            //当前元素比target大 往上移动
            if (array[len][i]>target)
                len--;
                //当前元素比target 小 往右移动
            else if (array[len][i]<target)
                i++;
            else
                return true;
        }
        return false;
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}