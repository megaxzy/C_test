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
 该成员方法的定义如下
iterator erase(iterator it); //
通过一个条目对象删除

iterator erase(iterator first, iterator last); //
删除一个范围

 size_type erase(const Key& key); //
通过关键字删除
 */

/*
int main(int argc, char* argv[]) {
    map<int,int> m;
    int j=0;
    int k=0;
    for(int i=5;i<55;i++){
        if(i%2==0)
            m[i]=1;

        //cout<<j++;
        //cout<<++k;
        //cout<<endl;
    }
    for(map<int,int>::iterator iter=m.begin();iter!=m.end();){  //auto
        cout<<(*iter).first<<endl;
        m.erase(iter++);
    }
    vector<int>  x(22,1);
    for(auto iter=x.begin();iter!=x.end();){  //auto
        cout<<(*iter)<<endl;
        x.erase(iter);
    }
    cout<<"size"<<x.size();
    return 0;
}
*/