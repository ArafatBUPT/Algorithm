#include <iostream>
#include "vector"
#include "map"

using namespace std;

class Solution {
public:
    int GetNumberOfK(vector<int> data, int k) {
        map<int,int> record;
        //record记录出现频率
        for (int i = 0; i <data.size() ; ++i) {
            record[data[i]]++;
        }
        //返回k的次数
        for (int i = 0; i <data.size() ; ++i) {
            if(data[i]==k)
                return record[data[i]];
        }
        return 0;
    }
};

