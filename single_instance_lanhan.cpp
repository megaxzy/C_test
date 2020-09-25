
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


//����ģʽ
// �ֲ���̬����
//���о�̬��
class singleton{
public:
    // ʹ��ָ�������������Ϊ�˱��⿽�����캯�����п���
    // Singleton single = Singleton::getInstance();
    static singleton* getInstance(){
        static singleton instance;
        return &instance;
    }
private:
    singleton(){
        std::cout << "�ֲ���̬��ʽ" << std::endl;
    }
    // �����ҪgetInstance �������ã�
    // Ҳ����ͨ�����ظ�ֵ������Ϳ������캯������������������Ҫ�����ʵ��
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
        if (p == NULL)   //p != NULL,˵�������Ѿ����������ˣ�ֱ�ӷ��ض����ָ�룬û��Ҫ�ڼ��������˷�ʱ�䡣
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