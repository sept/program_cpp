#include <iostream>
#include <cstring>
#include "student.h"
using namespace std;

Person::Person(const char *name, int age)
:name(NULL), age(age)  //对参数初始化
{
    cout<<"creat person"<<endl;
    this->name = new char[strlen(name) + 1];  //name分配空间  strlen 不包含'\0'
    strcpy(this->name, name);
}

void Person::display() const        //之间输出查看
{
    cout<<"<<<<display person information>>>>"<<endl<<"Name"<<name<<endl<<"Age"<<age<<endl<<endl;
}

Person::~Person()                   //析构函数  释放 new开辟的空间
{
    cout<<"delete person"<<endl;
    delete [] name;
}

Student::Student(const char *name, int age, int score):Person(name, age), score(score)
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
