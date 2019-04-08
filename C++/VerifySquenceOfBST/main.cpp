#include <iostream>
#include "vector"
using namespace std;


class Solution {
public:
    bool VerifySquenceOfBST(vector<int> sequence) {

        bool flag= true;
        int size=sequence.size();

        if (sequence[size-1]<sequence[size-2]) {
            for (int i = size - 2; i > 0; i -= 2) {
                if (sequence[i] < sequence[i - 1]) {
                    flag = false;
                    break;
                }
            }
            return flag;
        }
        else{
            for (int i = size-2; i >0 ; i-=2) {
                if (sequence[i]>sequence[i-1]) {
                    flag = false;
                    break;
                }
            }
            return flag;
        }

    }
};