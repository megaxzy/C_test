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
int main() {
    int N,M,Q;
    cin>>N>>M>>Q;
    vector<int> book(M+1,-1); //书在哪行  -2是在小团  -1在小美
    vector<int> lock(N+1,0);  //行状态   0无锁   1有锁
    for(int i=0;i<Q;i++){
        int op;cin>>op;int x,y;
        if(op==1){
             cin>>x>>y;
            if(book[x]==-2 || lock[book[x]]==1  ||  lock[y]==1){
                continue;
            }
            else{
                book[x]=y;
            }
        }
        else if(op==2){
            cin>>y;
            lock[y]=1;
        }
        else if(op==3){
            cin>>y;
            lock[y]=0;
        }
        else if(op==5){
            cin>>x;
            if(book[x]==-2)
                book[x]=-1;
        }
        else if(op==4){
            cin>>x;
            if(lock[book[x]]==0){
                cout<<book[x]<<endl;
                book[x]=-2;
            }
            else
                cout<<-1<<endl;
        }
    }
}





*/






