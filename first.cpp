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
	point(int a = 3, int b = 5)           //构造函数 即 完成对象内容的初始化
    :x(a), y(b)                      //也可使用 此方法 对 数据成员 进行初始化
/*此处的 a和b 可看为局部变量 而在类中 定义的x,y可看作为 全局变量 */
/*若 主函数中 没有对类 传入参数 则使用局部变量 对x, y的初始化，反之 则使用传入的数据*/
	{
//		x = a;           //隐含的指针 指向自己
//		y = b;
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
	point p;     //若没有传参并且没有默认值 则在类中加一个空的 构造函数
//	point p(3, 5);

	p.show();
	cout<<"  p   "<<&p<<endl;

	return 0;
}
