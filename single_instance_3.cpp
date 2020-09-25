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
#include <process.h>
#include <windows.h>
using namespace std;

class single{
private:
    single(){}
    static single *instance;

public:
    static single* get_single(){
        return instance;
    }
    static int count;
    static void print(){
        cout<<count<<endl;
    }
};
single *single::instance=new single;//饿汉  直接初始化
int single::count=0;
/*
int main(){
    single *a1= single::get_single();;
    single *a2= single::get_single();;
    cout<<a1<<" "<<a2<<endl;
    a1->count+=9;
    a1->print();
    a2->print();
    return 0;
}*/