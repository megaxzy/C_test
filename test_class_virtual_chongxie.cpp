



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
    a(){

    }
    virtual int aaa(){
        return 4;
    }
    ~a(){cout<<"delete";}

};
class b:a{
public:
    int h2=1;
    int aaa(){
        return 5;
    }
};
/*
int main(){
    a A;
    b B;
    cout<<A.aaa()<<endl;
    cout<<B.aaa()<<endl;
    for(int i=0;i<3;i++)
        a Aaa;
    return 0;

}*/