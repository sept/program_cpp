#ifndef STUDENT_H
#define STUDENT_H

class Person
{
public:
    Person(const char *P_name = NULL, int P_age = 0);
    ~Person();
    void display() const;               //只可访问 不可修改

protected:
    char *name;
    int age;
};

class Student:public Person
{
public:
    Student(const char *S_name = NULL, int S_age = 10, int S_score = 59);
    ~Student();
    void display() const;

private:
    int score;
};

#endif 
