#include <iostream>
#include <cstring>
#include "student.h"
using namespace std;

Person::Person(const char *P_name, int P_age)
:name(NULL), age(P_age)     //对参数初始化   若参数无空 则使用 默认值
{
    cout<<"creat person"<<endl;

    if (P_name == NULL)                //若name 为空则开辟一个字节 为了不论何种情况 delete时 不出错
    {
        this->name = new char[1];
        *this->name = '\0';
        return;
    }

    this->name = new char[strlen(P_name) + 1];  //name分配空间  strlen 不包含'\0'
    strcpy(this->name, P_name);
}

void Person::display() const        
{
    cout<<"<<<<display person information>>>>"<<endl<<"Name"<<name<<endl<<"Age"<<age<<endl<<endl;
}

Person::~Person()                   //析构函数  释放 new开辟的空间
{
    cout<<"delete person"<<endl;
    delete [] name;
}

Student::Student(const char *S_name, int S_age, int S_score)
:Person(S_name, S_age), score(S_score)
{
    cout<<"creat student"<<endl;
}

void Student::display() const
{
    cout<<"<<<<display student information>>>>"<<endl<<"Name"<<name<<endl<<"Age"<<age<<endl<<"Score"<<score<<endl;
}

Student::~Student()        //student的析构函数 由于 两个类中name为同一所指空间 所以开辟一次 释放一次即可
{
    cout<<"delete student"<<endl;
}
