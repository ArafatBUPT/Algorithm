#include <iostream>
#include "map"
#include "vector"
using namespace std;

class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        //map统计出现次数
        map<int,int> record;
        int count =0;
        for (int i = 0; i <numbers.size(); ++i) {
            //出现一次Count=1 Count>一半 返回当前i指向的元素
            count = ++record[numbers[i]];
            if(count>numbers.size()/2)
                return numbers[i];
        }
        return 0;
    }
};
int main() {
    vector<int> num{1, 2, 3, 2, 2, 2, 5, 4, 2};
    Solution s;
    int n = s.MoreThanHalfNum_Solution(num);
    cout << n << endl;

}

