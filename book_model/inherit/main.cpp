/*使用子类 传参 对父类进行初始化 */
#include <iostream>
#include "student.h"
using namespace std;

#if 0
/*继承 例子*/
int main(void)
{
    Student *student = new Student("XianMing", 12, 99);   //通过 定义变量时传参
//    Student student;   //不传 任何参数 若有默认值 则输出默认数据
    student->display();

    Person *person = student;          //父类 根据子类的传参数据 初始化 自己 从而输出与子类匹配的数据
//    Person person;                  // 此方式 只能 输出 父类默认的 初始化数据
    person->display();

    return 0;
}
#endif

#if 1
/*多态 在头文件中 使用virtual 虚函数*/
int main(void)
{
    Student *student = new Student("xiaohuang", 12, 99);
    student->display();
    Person *p = student;
    p->display();
    delete student;

    p = new Person("xiaolv", 22);
    p->display();
    delete p;

    return 0;
}
    
#endif
