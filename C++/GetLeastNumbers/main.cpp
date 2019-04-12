#include <iostream>
#include "vector"
#include "set"
using namespace std;

class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        vector<int> res;
        if(input.size()==0 || k>input.size() ||k<=0)
            return res;
        //Set存入K个元素以后 每次和Set最后一个元素作比较 小于最后一个元素就加入到Set中
        //Set自动排序
        set<int> s;
        int size=0;//记录Set元素个数
        vector<int>::iterator iterVector;
        set<int>::reverse_iterator iterSet;
        for (iterVector=input.begin();iterVector!=input.end();iterVector++) {
            if (size < k) {//Set中元素不到K个元素
                s.insert(*iterVector);
                size++;
            } else {
                //Set中元素大于K个之后，迭代器指向Set最后一位
                iterSet = s.rbegin();
                if (*iterSet > *iterVector) {//和Vector当前元素作比较
                    //Vector中的元素小的话 删除Set最后元素
                    s.erase(*iterSet);
                    s.insert(*iterVector);
                }
            }
        }
        res=vector<int>(s.begin(),s.end());
        return res;
    }
};

int main(){
    vector<int> nums{4,5,1,6,2,7,3,8};
    Solution s;
    vector<int> res=s.GetLeastNumbers_Solution(nums,4);
    for (int i = 0; i <res.size(); ++i) {
        cout<<res[i]<<' ';
    }
}

