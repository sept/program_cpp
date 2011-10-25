/*拷贝构造函数 实例*/
#include <iostream>
#include <cstring>
using namespace std;

class Animal
{
public:
    Animal(int a = 1, const char *n = NULL)      // 构造函数 若没有定义 则为系统默认的；定义了 则没有默认
            /*缺省参数 可以只是第一个，而不可以最后一个*/
    {
        cout<<"animal constructure"<<endl;    
        age = a;
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }
    Animal(Animal &t)                     // 拷贝构造函数  系统有默认的函数 但是浅拷贝
    {                                     // 此方法 实现为深拷贝 因为拷贝了指针开辟的空间
        cout<<"animal copy constructure"<<endl;    
        age = t.age;
        name = new char[strlen(t.name) + 1];
        strcpy(name, t.name);
    }
    virtual void sleep()       //虚函数 类似 包含void (*sleep)() 函数指针       动态绑定（在运行时）
	{
        cout<<"animal sleep"<<endl;
    }
    void show_info()
    {
        cout<<"Animal age = "<<age<<endl<<"name = "<<name<<endl;
    }
    ~Animal()
    {
        cout<<"Animal unconstructure"<<endl;
        if (name)
            delete []name;
        name = NULL;
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

int main(void)
{
    Animal an(5, "hello");
    Animal bn(an);

    bn.show_info();

    return 0;
}
