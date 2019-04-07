#include <iostream>
#include "stack"
using namespace std;

class Solution {
public:
    int  NumberOf1(int n) {
        int count=0;
        //从第一位开始右移一位，是1 count++
        for (int i = 0; i <32 ; ++i) {
            if(n>>i&1)
                count++;
        }
        return count;
    }
};

