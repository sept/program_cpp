#include <iostream>
#include <cstring>

using namespace std; // std : 命令空间

/*C++中 结构体中可以定义函数*/
class point 
{
	int x;
	int y;
	char *p;
public:
	void show()
	{
		cout<<"p.x="<<x<<"\n"<<"p,y="<<y<<endl;
		cout<<"p = "<<p<<endl;
		cout<<" this "<<this<<endl;
	}
//	point()
//	{}
	point(int x, int y)           //构造函数 即 完成对象内容的初始化
	/*此处的 x和y 可看为局部变量 跟private 中定义的变量相反*/
	{
		this->x = x;           //隐含的指针 指向自己
		this->y = y;
		p = (char *)new char[1024];
		strcpy(p, "hello world~!");
	}
	~point()                //析构函数 即 清除占用空间
	{
		if (p)
			delete []p;
		p = NULL;
	}
};

int main(void)
{
//	point p;     //若没有传参 则在类中加一个空的 构造函数
	point p(3, 5);

	p.show();
	cout<<"  p   "<<&p<<endl;

	return 0;
}
