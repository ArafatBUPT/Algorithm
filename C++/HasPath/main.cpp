#include <iostream>
#include "vector"
using namespace std;

class Solution {
private:
    int m, n;
    bool inArea(int x, int y) { return x >= 0 && x < m && y >= 0 && y < n; }
    vector<vector<bool>> visited;
    int d[4][2] = {{0,  1},
                   {1,  0},
                   {0,  -1},
                   {-1, 0}};



    bool isPath(const vector<vector<char>> board,const string str, int index, int x, int y) {
        //如果是最后匹配到最后一位 返回
        if (index == str.length() - 1)
            return board[x][y] == str[index];

        //如果当前元素匹配到了
        if (board[x][y] == str[index]) {
            //记录状态
            visited[x][y] = true;
            //从该位置遍历左、下、右、上
            for (int i = 0; i < 4; i++) {
                int nx = x + d[i][0];
                int ny = y + d[i][1];
                //判断是不是被访问过 是不是在范围 递归
                if (inArea(nx, ny) && !visited[nx][ny] && isPath(board, str, index + 1, nx, ny))
                    return true;
            }
            //如果上下左右都没匹配上 状态改回未访问
            visited[x][y] = false;
        }
        return false;
    }

public:
    bool hasPath(char *matrix, int rows, int cols, char *str) {
        //先把matrix存到二维数组
        vector<vector<char>> board(rows, vector<char>(cols));
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                //变换成二维
                board[i][j] = matrix[i * cols + j];
            }
        }

        visited = vector<vector<bool>>(rows, vector<bool>(cols, false));
        string s(str);// 用String传参
         m = rows;
         n = cols;
         //遍历二维数组 找到第一个匹配
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (isPath(board, s, 0, i, j))
                    return true;
            }
        }
        return false;
    }
};







int main() {
    char *map = "ABCESFCSADEE";
    char *m = "ABCCED";

    return 0;
}