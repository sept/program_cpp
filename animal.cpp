#include <iostream>
using namespace std;

class Animal
{
public:
	virtual void sleep()       //虚函数 类似 包含void (*sleep)()        绑定
	{cout<<"animal sleep"<<endl;}
protected:                          //被保护 的区域 可在 继承他的函数中调用
	void eat()
	{cout<<"animal eat"<<endl;}
private:
	void walk()
	{cout<<"animal walk"<<endl;}
};

class Dog:public Animal
{
public:
	void sleep()
	{cout<<"Dog sleep"<<endl;}
};

class Person:public Animal
{
public:
	void sleep()
	{
		eat();
		cout<<"person sleep"<<endl;
	}
};

int main(void)
{
	Animal *an;
	Person p;
	an = &p;
	an->sleep();

	return 0;
}
