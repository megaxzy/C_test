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

/*
int find(vector<vector<pair<int,int>>> &dp,int sum,int cur){
    int ss=0;
    int mm=0;

    if(dp[cur].size()==0)
        return 0;
    for(int i=0;i<dp[cur].size();i++){
        int re=find(dp,0,dp[cur][i].first)+dp[cur][i].second;
        mm=max(mm,re);
        ss+=re;
    }
    cout<<cur<<" "<<ss*2-mm<<endl;
    return ss*2-mm;
}
int main(){
    int T; cin>>T;
    for(int i=0;i<T;i++){
        int n;cin>>n;
        vector<vector<pair<int,int>>> dp(n+1);
        for(int j=0;j<n-1;j++){
            int x,y,w;
            cin>>x>>y>>w;
            dp[x].push_back(make_pair(y,w));
        }
        cout<<find(dp,0,1)<<endl;
    }
}



/*
int main() {
    int a,b,c,d,e,f,g;
    cin>>a>>b>>c>>d>>e>>f>>g;
    int ans=0;
    vector<int> dp(3);
    vector<int> temp_v(3);
    temp_v[0]=e;temp_v[1]=f;temp_v[2]=g;
    vector<int> temp_n(3);
    temp_n[0]=a;temp_n[1]=b;temp_n[2]=c;
    if(e>=f && f>=g){
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
    }
    else if(e>=g && g>=f){
        dp[0]=0;
        dp[1]=2;
        dp[2]=1;
    }
    else if(f>=e && e>=g){
        dp[0]=1;
        dp[1]=0;
        dp[2]=2;
    }
    else if(f>=g && g>=e){
        dp[0]=1;
        dp[1]=2;
        dp[2]=0;
    }
    else if(g>=e && e>=f){
        dp[0]=2;
        dp[1]=0;
        dp[2]=1;
    }
    else if(g>=f && f>=e){
        dp[0]=2;
        dp[1]=1;
        dp[2]=0;
    }
    while(d>0){

        if(temp_n[dp[0]]!=0){
            if(d<=temp_n[dp[0]]){
                ans+=d*temp_v[dp[0]];
                d=0;
                continue;
            }
            else{
                ans+=temp_n[dp[0]]*temp_v[dp[0]];
                d-=temp_n[dp[0]];
                temp_n[dp[0]]=0;
                continue;
            }
        }
        else if(temp_n[dp[1]]!=0){

            if(d<=temp_n[dp[1]]){
                ans+=d*temp_v[dp[1]];
                d=0;
                continue;
            }
            else{
                ans+=temp_n[dp[1]]*temp_v[dp[1]];
                d-=temp_n[dp[1]];
                temp_n[dp[1]]=0;
                continue;
            }
        }
        else if(temp_n[dp[2]]!=0){
            if(d<=temp_n[dp[2]]){
                ans+=d*temp_v[dp[2]];
                d=0;
                continue;
            }
            else{
                ans+=temp_n[dp[2]]*temp_v[dp[2]];
                d-=temp_n[dp[2]];
                temp_n[dp[2]]=0;
                continue;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}*/
