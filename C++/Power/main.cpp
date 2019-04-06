#include <iostream>
using namespace std;

class Solution {
public:
    double Power(double base, int exponent) {
        if (!exponent)
            return 1;

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

int main() {

    double i=1.1;
    i*=i;
    cout<<i<<endl;
    return 0;
}