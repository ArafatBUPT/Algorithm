#include <iostream>
#include "vector"

using namespace std;

class Solution {
public:
    int Fibonacci(int n) {
        if(!n){
            return 0;
        }
        vector<int> memo(n+1,-1);
        memo[1]=1;
        memo[2]=1;
        for (int i = 3; i <=n ; ++i) {
            memo[i] = memo[i - 1] + memo[i + 2];
        }
        return memo[n];
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}