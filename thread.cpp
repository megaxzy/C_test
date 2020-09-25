
#include <iostream>
#include<thread>
#include<pthread.h>
#include <windows.h>
using namespace std;
pthread_mutex_t m;
/*
void print1(int x)
{
    cout<<x<<endl;
    pthread_mutex_lock(&m);
    cout << "print1_1线程执行" << endl;
    Sleep(1000);
    cout << "print1_2线程执行" << endl;
    cout << "print1_3线程执行" << endl;
    pthread_mutex_unlock(&m);
}
using namespace std;
int main()
{
    pthread_mutex_init(&m,nullptr);
    thread mythread1(print1,888);
    thread mythread2(print1,999);
    mythread1.join();
    mythread2.join();
    cout << "主线程执行" << endl;





    return 0;
}*/