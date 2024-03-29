/*#include<stdio.h>
#include <stdlib.h>
*/
/*c++中 引用 的使用*/
#include <iostream>
using namespace std;
#if 1
void swap(int &x, int &y)
{
	int temp;

	temp = x;
	x = y;
	y = temp;
}

int main(void)
{
	int a = 4;
	int b = 11;

//	swap(&a, &b);
	swap(a, b);               // 用a和b 初始化 x 和 y;

//	printf("a = %d\nb = %d\n", a, b);
	cout<<"a = "<<a<<"\n"<<"b = "<<b<<endl;

	return 0;
}
#endif
#if 0
struct birthday
{
	int year;
	int month;
	int day;
};
/*struct stu_info结构体的首地址 和 struct birthday b 地址 相等 只是物理意义不一样
 相当于 二维数组中的 外地址和内地址 区别 
 若 定义变量b 不是放在首行 则 不能按下例 方式转化*/
struct stu_info
{
	struct birthday b;
	int num;
	char name[20];
};

int main(void)
{
	struct stu_info *p = malloc(sizeof(struct stu_info));
	if (p == NULL)
	{
		perror("malloc ");
		exit(-1);
	}
	p->b.year = 12;
	p->b.month = 3;
	p->b.day = 21;
	p->num = 220;

	printf("(birthday *)p->year = %d\n", ((struct birthday *)p)->year);
	printf("(birthday *)p->month = %d\n", ((struct birthday *)p)->month);
	printf("(birthday *)p->day = %d\n", ((struct birthday *)p)->day);

	free(p);
	p = NULL;

	return 0;
}
#endif
