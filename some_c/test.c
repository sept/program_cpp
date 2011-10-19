#include<stdio.h>
#include <stdlib.h>
#if 0
void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

int main(void)
{
	int a = 4;
	int b = 11;

	swap(&a, &b);

	printf("a = %d\nb = %d\n", a, b);

	return 0;
}
#endif

struct birthday
{
	int year;
	int month;
	int day;
};

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
