#include <iostream>
#include <cstring>

using namespace std; // std : 命令空间

/*C++中 结构体中可以定义函数*/
class point 
{
public:
	int x;
	int y;
	char *p;

	void show()
	{
		cout<<"p.x="<<x<<"\n"<<"p,y="<<y<<endl;
		cout<<"p = "<<p<<endl;
	}
	point()                      //构造函数 即 完成对象内容的初始化
	{
		x = 1;
		y = 2;
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
	point p;
	p.show();

	return 0;
}
