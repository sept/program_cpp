/*使用子类的构造函数中参数 初始化父类构造函数的参数*/
#include <iostream>
#include <cstring>
using namespace std;

class Animal
{
public:
    Animal(int a = 1)      // 构造函数 若没有定义 则为系统默认的；定义了 则没有默认
    {
        cout<<"animal constructure"<<endl;    
        age = a;
    }
    virtual void sleep()       //虚函数 类似 包含void (*sleep)() 函数指针       动态绑定（在运行时）
    {
        cout<<"Animal sleep"<<endl;
    }
    void show_info()
    {
        cout<<"age = "<<age<<endl;
    }
    ~Animal()
    {
        cout<<"Animal unconstructure"<<endl;
    }
protected:                          //被保护 的区域 可在 继承他的函数中调用
	void eat()
	{
        cout<<"animal eat"<<endl;
    }
private:
	void walk()
	{
        cout<<"animal walk"<<endl;
    }
    int age;
    char *name;
};

class Dog:public Animal
{
public:
    Dog(int a = 2):Animal(a)
    {
        cout<<"Dog constructure"<<endl;
    }
	void sleep()
	{cout<<"Dog sleep"<<endl;}

    ~Dog()
    {
        cout<<"Dog unconstructure"<<endl;
    }
};

class Person:public Animal
{
public:
    Person(int a):Animal(a)
    {
        cout<<"Person constructure"<<endl;
    }
public:
	void sleep()
	{
		eat();
		cout<<"person sleep"<<endl;
	}
    ~Person()
    {
        cout<<"Person unconstructure"<<endl;
    }
};

int main(void)
{
	Animal *an = new Animal(5);
    an->show_info();
    delete  an;
//    an->sleep();     //因为 Animal 中使用 virtual 故此处 看做指针重指到Person类 中的sleep  
   
    Dog dg;
    dg.show_info();

    Person ps(6);
    ps.show_info();

	return 0;
}
