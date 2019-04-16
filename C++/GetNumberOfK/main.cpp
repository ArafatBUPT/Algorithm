#include <iostream>
#include "vector"
#include "map"

using namespace std;

class Solution {
public:
    int GetNumberOfK(vector<int> data, int k) {
        map<int,int> record;
        for (int i = 0; i <data.size() ; ++i) {
            record[data[i]]++;
        }

        for (int i = 0; i <data.size() ; ++i) {
            if(data[i]==k)
                return record[data[i]];
        }
        return 0;
    }
};

