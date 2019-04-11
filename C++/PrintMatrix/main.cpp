#include <iostream>
#include "vector"

using namespace std;

class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
        vector<int> res;
        // 定义闭区间 四个方向  控制四个方向范围
        int left = 0, right = matrix[0].size() - 1, top = 0, bottom = matrix.size() - 1;

        while (left <= right && top <= bottom) {
            //left to right
            for (int i = left; i <= right; i++) { res.push_back(matrix[top][i]); }
            //top to bottom
            for (int i = top + 1; i <= bottom; i++) { res.push_back(matrix[i][right]); }
            //right to left
            if (top != bottom)//高度大于1
                for (int i = right - 1; i >= left; i--) { res.push_back(matrix[bottom][i]); }
            //bottom to top
            if (left != right)//宽度大于1
                for (int i = bottom - 1; i >= top + 1; i--) { res.push_back(matrix[i][left]); }
            left++;
            right--;
            top++;
            bottom--;
        }
        return res;
    }
};
