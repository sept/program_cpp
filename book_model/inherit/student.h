#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

class Person
{
public:
    Person(const char *P_name = NULL, int P_age = 0);
    ~Person();
    virtual void display() const;               // 虚函数 相当于内部有个指针 虚函数等于0 则不可被实例化
//    void display() const;               //只可访问 不可修改

protected:
    char *name;
    int age;
};

class Student:public Person
{
public:
    Student(const char *S_name = NULL, int S_age = 10, int S_score = 59);
    ~Student();
//    virtual void display() const;
    void display() const;

private:
    int score;
};

#endif 
