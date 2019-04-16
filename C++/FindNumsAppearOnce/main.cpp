#include <iostream>
#include "vector"
#include "map"

using namespace std;

class Solution {
public:
    void FindNumsAppearOnce(vector<int> data,int* num1,int *num2) {
        //map记录出现频率
        map<int,int> record;
        for (int i = 0; i <data.size() ; ++i) {
            record[data[i]]++;
        }
        //用迭代器遍历record num1 num2 初始化为0 
        map<int,int>::iterator it;
        for(it=record.begin();it!=record.end();it++){
            if(it->second==1){
                if(*num1== 0)
                    *num1=it->first;
                else
                    *num2=it->first;
            }
        }
    }
};

