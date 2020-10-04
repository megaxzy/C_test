#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <math.h>
#include <limits.h>
#include <stack>
#include <map>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <queue>
#include <list>

using namespace std;
// 回车形矩阵
//100
/*
int main(){
    int C;cin>>C;
    for(int i=0;i<C;i++){
        int N,M;
        cin>>N>>M;

        vector<vector<int>> matrix(N,vector<int> (N));
        int dir=0; //0是顺时针，1是逆时针
        int s=0; int e=N-1; int cur=1;  //cur要填入的信息
        while(s<e){
            if(dir==0) {
                for (int k = s; k <= e; k++) {
                    matrix[s][k] = cur;
                    cur++;
                }
                for (int k = s + 1; k <= e; k++) {
                    matrix[k][e] = cur;
                    cur++;
                }
                for (int k = e - 1; k >= s; k--) {
                    matrix[e][k] = cur;
                    cur++;
                }
                for (int k = e - 1; k >= s + 1; k--) {
                    matrix[k][s] = cur;
                    cur++;
                }
            }
            else{
                for (int k = s; k <= e; k++) {
                    matrix[k][s] = cur;
                    cur++;
                }
                for (int k = s+1; k <= e; k++) {
                    matrix[e][k] = cur;
                    cur++;
                }
                for (int k = e-1; k >= s; k--) {
                    matrix[k][e] = cur;
                    cur++;
                }
                for (int k = e-1; k >= s+1; k--) {
                    matrix[s][k] = cur;
                    cur++;
                }
            }
            s++;
            e--;
            if(dir==0)dir=1;else dir=0;
        }
        if(s==e) matrix[s][e]=cur;

        for(int j=0;j<M;j++){
            int x,y;cin>>x>>y;
            cout<<matrix[x][y]<<endl;
        }
    }
    return 0;
}
 */