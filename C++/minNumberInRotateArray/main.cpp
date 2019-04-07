#include <iostream>
#include "vector"

using namespace std;
class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        int minIndex=0;
        //从头遍历，前一个值比当前的值小 返回索引
        for (int i = 0; i <rotateArray.size();i++) {
            if(rotateArray[i]>rotateArray[i+1]) {
                minIndex = i + 1;
                break;
            }
        }
        return rotateArray[minIndex];
    }
};

