// 1.  swap two numbers without using a third variable

#include <stdio.h>

int main()
{
  int a,b;
  
  printf("Enter 2 numbers ");
  scanf("%d %d",&a,&b);
  
  a=a+b;
  b=a-b;
  a=a-b;
 
 printf("Numbers after swapping are: %d %d",a,b);

    return 0;
}
