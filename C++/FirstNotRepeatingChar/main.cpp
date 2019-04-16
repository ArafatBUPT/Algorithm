#include <iostream>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
    int FirstNotRepeatingChar(string str) {
        map<char,int> record;
        //map存频率
        for (int i = 0; i <str.size() ; ++i) {
            record[str[i]]++;
        }
        //遍历str 从map获取出现频率
        for (int i = 0; i <str.size() ; ++i) {
            if(record[str[i]]==1)
                return i;
        }
        return -1;
    }
};

