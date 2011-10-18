#include<stdio.h>

//typedef int (*fun)(int a,int b);
int (*fun)(int a,int b);

int add(int a, int b)
{
	return (a+b);
}

int sub(int a, int b)
{
	return (a-b);
}
int process(int (*fun)(int, int), int a, int b)
{
	return (*fun)(a,b);
}
int main(void)
{
	int c;

	c = process(add, 9, 5);
	printf("%d\n", c);

	return 0;
}
