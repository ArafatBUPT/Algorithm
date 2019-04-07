#include <iostream>
#include "vector"
using namespace std;

class Solution {
public:
    int jumpFloor(int number) {
        if(!number){
            return 0;
        }
        //记忆化搜素
        vector<int> memo(number+1,-1);
        memo[1]=1;
        memo[2]=2;
        for (int i = 3; i <=number; ++i) {
            memo[i]=memo[i-1]+memo[i+2];
        }
        return memo[number];
    }
};
