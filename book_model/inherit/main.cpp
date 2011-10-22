#include <iostream>
#include "student.h"
using namespace std;

int main(void)
{
    Student student("XianMing", 12, 99);   //通过 定义变量时传参
    student.display();                             
    cout<<endl;
    Person *p = &student;
    p->display();

    return 0;
}
