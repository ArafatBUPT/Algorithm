#include <iostream>
using namespace std;

class Solution {
public:
    double Power(double base, int exponent) {
        //0次方 返回1
        if (!exponent)
            return 1;

        //负数次方，取反+1
        //-3  原码：10000011 反码：11111100 补码：11111101
        // 取反： 负数补码取反  00000010  = 2  So要加一
        if (exponent<0){
            exponent=~exponent+1;
            for (int i = 1; i <exponent; ++i) {
                base*=2;
            }
            return 1/base;
        }
        for (int i = 1; i <exponent ; ++i) {
            base*=2;
        }
        return base;
    }
};

