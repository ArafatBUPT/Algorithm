#include <iostream>
#include "vector"
using namespace std;


class Solution{
private:
    vector<bool> col;
    vector<bool> dia1;
    vector<bool> dia2;
    vector<vector<string>> res;

    vector<string> generateBoard(int n,vector<int>& row){
        //row记录第几列有Q
        vector<string> board(n,string(n,'.'));
        for (int i = 0; i <n ; ++i) {
            board[i][row[i]]='Q';
        }
        return board;
    }
    void putQueen(int n,int index,vector<int> &row){
        if(index==n){
            //最后一行 返回
            res.push_back(generateBoard(n,row));
        }

        for(int i=0;i<n;i++){
            //从index行 找i个列位置放Q
            if(!col[i] && dia1[index+i] && dia2[index-i+n-1]){
                //index 行的 第i列
                row.push_back(i);
                col[i]=true;
                dia1[index+i]=true;
                dia2[index-i+n-1]=true;
                putQueen(n,index+1,row);
                col[i]=false;
                dia1[index+i]=false;
                dia2[index-i+n+1]=false;
                row.pop_back();
            }
        }
        return;
    }
public:
    vector<vector<string>> solveNQueens(int n){
        res.clear();
        //记录当前列有没有放置Q
        col = vector<bool>(n,false);
        // 右上到左下对角线
        dia1 = vector<bool>(2*n-1, false);
        //左上到右下对角线
        dia2 = vector<bool>(2*n-1, false);
        vector<int> row;
        putQueen(n,0,row);
        return res;
    }
};