#include <iostream>
using namespace std;
//函数的重载 跟返回值没有关系 只跟函数名和参数类型有关系
// addii 和 addic
int add(int x = 1, int y = 1)   //函数默认值 规则从左到右 
{
	return (x+y);
}

float add(int x, char y)
{
	return (x+y);
}

int main(void)
{
	cout<<"add()"<<add()<<endl;
	cout<<"add(3, 5) = "<<add(3, 5)<<"\n"<<"add(6, 'q')"<<add(6, 'q')<<endl;

	return 0;
}
