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
/*
class only
{
private:
    only()   //构造函数是私有的，这样就不能在其它地方创建该实例
    {
    }
    static only *p;  //定义一个唯一指向实例的静态指针，并且是私有的。
    static int b;
public:
    static only* GetInstance()   //定义一个公有函数，可以获取这个唯一的实例，并且在需要的时候创建该实例。
    {
        if(p == NULL)  //判断是否第一次调用
            p = new only;
        return p;
    }
    static void show()
    {
        cout << b << endl;
    }
};
int only::b=66;     //static定义的数据成员必须在类外初始化，因为它是整个类的一部分，而不是属于某个对象。
only* only::p=NULL;
int main() {
    only *a1 = only::GetInstance();
    cout << a1 << endl;
    a1->show();
    only *a2 = only::GetInstance();
    cout << a2 << endl;
    a2->show();
    return 0;
}
*/