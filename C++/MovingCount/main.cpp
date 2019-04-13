#include <iostream>
#include "vector"
using namespace std;

class Solution {
private:

    //辅助变量和方法
    int rows,cols;
    int sum,k;
    int d[4][2] ={{0,1},{1,0},{0,-1},{-1,0}};

    vector<vector<bool>> visited;



    bool inArea(int x,int y){ return x>=0 && x<rows && y>=0 && y<cols;}

    //深度优先遍历
    void dfs(int x,int y){
        visited[x][y]=true;
        for (int i = 0; i <4 ; ++i) {
            //上下左右查找坐标
            int newx=x+d[i][0];
            int newy=y+d[i][1];
            //如果坐标合法 继续深度优先遍历     只能判断两位数的坐标
            if(inArea(newx,newy) && !visited[newx][newy] && (newx%10+newx/10+newy%10+newy/10<=k)) {
                sum ++;
                dfs(newx, newy);
            }
        }
    }
public:
    int movingCount(int threshold, int rows, int cols){
        if(threshold<0 )
            return 0;
        this->rows=rows;
        this->cols=cols;
        this->k=threshold;
        sum=1;
        visited = vector<vector<bool>>(rows,vector<bool>(cols,false));

        dfs(0,0);
        return sum;
    }
};
