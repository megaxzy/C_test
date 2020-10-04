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
class A {
    char a;  //1
    char b;  //2
    int x;   //8
    char c;  //12
    long long y;  //24
    char d;  //32
    double z;  //40
    float h;  //48
    float h2; //48
};
class B {
    char a;  //1
    int b[0];//4
    long long c[0]; //8 告诉以8存储结尾
    long long d;//16  ??? TODO
};
class C {
    char a;  //1
    int b[0];//4
    char d;//8
    long long c[0]; //8 告诉以8存储结尾
};
class s{
public:
    int hs;
    virtual int hc(){return 0;}
};
class a:virtual public s{
public:
    int ha;
};
class b:virtual public s{  //16
public:
    int hb;
};
class c:public a,public b{ //28
public:
    int hcc;
    virtual int hc(){return 0;}
};

int main(){
    std::cout<<sizeof(A)<<std::endl;
    std::cout<<sizeof(B)<<std::endl;
    std::cout<<sizeof(C)<<std::endl;
    std::cout<<"b:"<<sizeof(b)<<std::endl;
    std::cout<<"c:"<<sizeof(c)<<std::endl;
    c test;
    std::cout<<&test<<std::endl;
    std::cout<<&test.hs<<std::endl;
    std::cout<<&test.ha<<std::endl;
    std::cout<<&test.hb<<std::endl;
    return 0;
}*/