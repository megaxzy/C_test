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


class person{
public:
    int age;
    long long number;
    long long number_2;
    char blood;
    char blood_2;
    char blood_3;
    char blood_4;
    char blood_5;
    person(int x,long long n,char b){
        age=x;
        number=n;
        blood=b;
    }
};

class ppp{
    int age;
};

class ppp_2{
    virtual int px(){
        return 0;
    }
    virtual int px_2(){
        return 0;
    }
    virtual int px_3(){
        return 0;
    }
};



class xx_1{
    int age;  //4
    long long age_2;  //8   //int + long long 为16
    char x;   //16
    //long long age_3;  //8
    //char *p;  //  对齐  如果有long则是12   如果只有int则是4
    //char *a;
};
typedef struct MemAlign
{
    char a[18];

}MemAlign;
typedef struct MemAlign_2
{
    char a[18];
    double b;
    double c;
}MemAlign_2;
typedef struct one {
    char a;
    int b;
    int cc;
    int dd;
    double c;
    char d;
} ONE;   //32
typedef struct TWO {
    char a[18];
    double b;
} TWO;   //32 18 + 6(bu qi) +8
//class，sizeof的输出

class p0{
public:
    int a;
    int b;

};
class p1: virtual public p0{  //a +b +h+ 4基类虚表
public:
    int h;
    virtual int pppp(){return 0;}

};
class p3:virtual public  p0{
public:
    int h2;

};
class p5:virtual public  p0{
public:
    int h3;

};
//当存在虚拟继承时，派生类中会有一个指向虚基类表的指针。所以其大小应为普通继承的大小（12字节），再加上虚基类表的指针大小（4个字节），共16字节。
//a b h1 h2 两个虚基类表 4 +4 +4 +4 +4*3。
class p2: public p1,public p3,public p5{

};
/*
int main(int argc, char* argv[]) {
    cout<<sizeof(p0)<<endl;  //16
    cout<<sizeof(p1)<<endl;  //16
    cout<<sizeof(p3)<<endl;  //16

    cout<<"p2:::"<<sizeof(p2)<<endl;  //24

    //
    cout<<sizeof(ONE)<<endl;
    cout<<sizeof(TWO)<<endl;
    cout<<"    "<<endl;
    cout<<sizeof(MemAlign)<<endl;   //18
    cout<<sizeof(MemAlign_2)<<endl;   //40   18+6+8+8
    cout<<"xx_1"<<" "<<sizeof(xx_1)<<endl;

    cout<<"空类"<<" "<<sizeof(ppp)<<endl;
    cout<<"几个虚函数都是"<<" "<<sizeof(ppp_2)<<endl;   //如果64位则是8
    //未建立的时候
    cout<<"int"<<" "<<sizeof(int)<<endl;
    cout<<"long"<<" "<<sizeof(long)<<endl;
    cout<<"long long"<<" "<<sizeof(long long)<<endl;
    cout<<"float"<<" "<<sizeof(float)<<endl;
    cout<<"double"<<" "<<sizeof(double)<<endl;
    cout<<"char"<<" "<<sizeof(char)<<endl;
    cout<<"未建立类"<<" "<<sizeof(person)<<endl;
    //建立的时候
    person xxx(100,1526,'O');
    cout<<"建立类"<<" "<<sizeof(person)<<endl;

    return 0;
}
 */
