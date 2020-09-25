
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
/*
class singleton
{
private:
    singleton()
    {
        pthread_mutex_init(&mutex,nullptr);    //创建锁
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
                p = new singleton();
            }
            pthread_mutex_unlock(&mutex);
        }
        return p;
    }
};

pthread_mutex_t singleton::mutex;
singleton* singleton::p = NULL;

*/
/*

void threadFunc(void *p){
    DWORD id = GetCurrentThreadId();        // 获得线程id
    cout<<id<<endl;
    Singelton::GetSingelton()->print();      // 构造函数并获得实例，调用静态成员函数
}

int main(int argc, const char * argv[]) {
    int threadNum = 3;
    HANDLE threadHdl[100];

    // 创建3个线程
    for(int i = 0; i<threadNum; i++){
        threadHdl[i] = (HANDLE)_beginthread(threadFunc, 0, nullptr);
    }

    // 让主进程等待所有的线程结束后再退出
    for(int i = 0; i<threadNum; i++){
        WaitForSingleObject(threadHdl[i], INFINITE);
    }
    cout<<"main"<<endl;                 // 验证主进程是否是最后退出
    return 0;
}*/
