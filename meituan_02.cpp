/*
 时间限制： 1000MS
内存限制： 65536KB
题目描述：
在小美和小团生活的城市中，有n行m列共计n*m个十字路口，第 i 行 j 列的十字路口有两个属性aij，b­ij。当行人处在 i 行 j 列的路口，对于任意非负整数 k :

当时间处在[k*aij+k*b­ij), (k+1)*aij+k*bij)时，行人可以选择走到 i±1行 j 列的路口。

当时间处在[(k+1)*aij+k*bij), (k+1)*aij+(k+1)*b­ij)时，行人可以选择走到 i 行 j±1列的路口。

每次移动花费的时间为1，且要保证将要去的十字路口存在，即属于n*m个路口当中。可以选择原地静止不动。

在第0时刻，小美处在xs行ys列的十字路口处，要去xt行yt列的十字路口找小团。小团原地不动等小美，请问小美所花费的时间最少是多少?



输入描述
第一行六个正整数 n，m，xs，ys， xt，yt，空格隔开，含义如上文所示。

以样例第一行【5、5、2、4、4、3】 共计6个数字为例，前两位数字代表有5*5的二维数组，三、四位数字代表小美处在2行4列的十字路口处，五、六位数字代表要去4行3列的十字路口找小团。

接下来n行每行m个正整数，在样例中为第一个5*5的二维数组，第 i 行第 j 个数代表 i 行 j 列十字路口的属性aij。

接下来n行每行m个正整数，在样例中为第二个5*5的二维数组，第 i 行第 j 个数代表 i 行 j 列十字路口的属性bij。

（1≤n，m，xs，ys，xt，yt， aij， bij≤100）

输出描述
输出一行，一个整数代表答案。
 * */

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
/*
int ans=INT_MAX;
using namespace std;
void dfs(vector<vector<int>> &a,vector<vector<int>> &b,vector<vector<int>> &vis,int x1,int y1,int x2,int y2,int time){

    if(x1<0 || y1<0 || x1>=a.size()  || y1>=a[0].size())
        return;
    if(vis[x1][y1]==1)
        return;
    if(x1==x2 && y1 == y2){
        ans=min(time,ans);
        //cout<<"ans change"<<ans<<endl;
        return;
    }
    vis[x1][y1]=1;
    if(time%(a[x1][y1]+b[x1][y1])<a[x1][y1]){
        dfs(a,b,vis,x1+1,y1,x2,y2,time+1);
        dfs(a,b,vis,x1-1,y1,x2,y2,time+1);
    }
    if(time%(a[x1][y1]+b[x1][y1])<b[x1][y1]){
        dfs(a,b,vis,x1,y1+1,x2,y2,time+1);
        dfs(a,b,vis,x1,y1-1,x2,y2,time+1);
    }
    vis[x1][y1]=0;
}

int main(){
    int n,m,x1,y1,x2,y2;
    cin>>n>>m>>x1>>y1>>x2>>y2;
    vector<vector<int>> a(n,vector<int> (m));
    vector<vector<int>> b(n,vector<int> (m));
    vector<vector<int>> vis(n,vector<int> (m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>b[i][j];
        }
    }
    dfs(a,b,vis,x1,y1,x2,y2,0);

    cout<<ans<<endl;
    return 0;
}


*/



