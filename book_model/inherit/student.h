#ifndef STUDENT_H
#define STUDENT_H

class Person
{
public:
    Person(const char *name, int age);
    Person()
    {}
    ~Person();
    void display() const;               //只可访问 不可修改

protected:
    char *name;
    int age;
};

class Student:public Person
{
public:
    Student(const char *name, int age, int score);
    Student()
    {}
    ~Student();
    void display() const;

private:
    int score;
};

#endif //STUDENT_H
