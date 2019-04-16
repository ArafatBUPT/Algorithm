#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int InversePairs(vector<int> data) {
        int count=0;
        for (int i = 0; i <data.size(); ++i) {
            if(data[i]>data[i+1]) {
                count++;
                i++;
            }
        }
        return count%1000000007;
    }
};

