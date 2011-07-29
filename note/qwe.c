#include <stdio.h>

 
int main(void)
{  int i=0;
   int array[100];
   for(i=0;i<100;i++)
   {
      array[i]=i+1;
   
   
   }
   for(i=0; i<100; i++)
   {
     printf("%4d",array[i]);
   
   }
    printf("\n");
    return 0;
}






