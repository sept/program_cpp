#include <stdio.h>

#if 0
int main(void)
{
	int a = 321;
	char b = 'q';
	char *p = NULL;
	p = &a;

	printf("%d\n", *p); // 结果 65

	return 0;
}
#endif

#if 1
int main(void)
{
	int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int (*p)[4] = a;

	printf("*(*a+1) =   %d\n", *(*a+1));
	printf("*(*(a+1)) = %d\n", *(*(a+1)));
	printf("%d\n", **p);

	return 0;
}
	
#endif
