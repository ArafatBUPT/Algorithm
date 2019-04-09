#include <iostream>
#include "vector"
using namespace std;


class Solution {
private:
    bool judge(vector<int> arr,int l ,int r){
        //只剩下一个元素 返回
        if(l>=r) return true;

        //i指向最后一个比根小的元素
        int i=r-1;
        while (i>l && arr[i]>arr[r]) --i;

        //前面的元素比根大 返回false
        for (int j = i-1; j >=l ; --j) {
            if (arr[j]>arr[r])
                return false;
        }
        //区间是闭区间[];
        return judge(arr,l,i) && judge(arr,i+1,r-1);
    }
public:
    bool VerifySquenceOfBST(vector<int> arr) {
        if(!arr.size()) return false;
        return judge(arr,0,arr.size()-1);
    }
};