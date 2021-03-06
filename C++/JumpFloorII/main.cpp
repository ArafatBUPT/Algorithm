#include <iostream>
#include "vector"
using namespace std;

class Solution {
public:
    int jumpFloorII(int number) {
        if(!number){
            return 0;
        }
        //下一次是前一次的倍数
        //记忆化搜索
        vector<int> memo(number+1,-1);
        memo[1]=1;

        for (int i = 2; i <=number; ++i) {
            memo[i]=memo[i-1]*memo[i-2];
        }
        return memo[number];
    }
};


