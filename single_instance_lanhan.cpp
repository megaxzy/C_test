
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
#include <thread>
#include <mutex>
#include <pthread.h>

using namespace std;


//懒汉模式
// 局部静态变量
//类中静态类
class singleton{
public:
    // 使用指针而不是引用是为了避免拷贝构造函数进行拷贝
    // Singleton single = Singleton::getInstance();
    static singleton* getInstance(){
        static singleton instance;
        return &instance;
    }
private:
    singleton(){
        std::cout << "局部静态方式" << std::endl;
    }
    // 如果需要getInstance 返回引用，
    // 也可以通过重载赋值运算符和拷贝构造函数，这两个函数不需要具体的实现
    singleton(singleton const & single);
};

/*
int main(){
    singleton *a1=singleton::getInstance();
    singleton *a2=singleton::getInstance();
    return 0;
}*/
/*
class singleton
{
private:
    singleton()
    {
        pthread_mutex_init(&mutex, nullptr);
    }

    static singleton* p;
    static pthread_mutex_t mutex;
public:
    static singleton* initance()
    {
        if (p == NULL)   //p != NULL,说明对象已经创建出来了，直接返回对象的指针，没必要在加锁解锁浪费时间。
        {
            pthread_mutex_lock(&mutex);
            if (p == NULL)
            {
                cout<<"creat new"<<endl;
                p = new singleton();
            }
            pthread_mutex_unlock(&mutex);
        }
        return p;
    }
};

pthread_mutex_t singleton::mutex;
singleton* singleton::p = NULL;  //

int main(){

    singleton *a1=singleton::initance();
    singleton *a2=singleton::initance();

    return 0;
}
 */