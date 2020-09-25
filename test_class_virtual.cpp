

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

class a{
public:
    int h=9;

};
class c{
public:
    int h2=1;

};
class b:virtual public a,virtual public c{
    virtual int ccc(){return 3;}
};

class e:b{

};

class m{
    int a;
    virtual int bbb() {
        return 0;
    }
};
class n:public m{
    int b;

};/*
int main(){
    cout<<sizeof(a)<<endl;  //int + virtual   8
    cout<<sizeof(c)<<endl;  //int + virtual   4
    cout<<sizeof(b)<<endl;  //int + virtual   + int  +  4  =16
    cout<<sizeof(e)<<endl;  //int + virtual   + int  +  4  =16
    b xxx;
    cout<<xxx.h<<xxx.h2<<endl;
    cout<<sizeof(n);  //12
}*/



