// 2.  print a pyramid having a given number of  steps

#include <stdio.h>

int main()
{
  int n=0;
  
  printf("Enter no of steps ");
  scanf("%d",&n);
  
  int i,j,k=0;
  //row loop
  for(i=0;i<n;i++)
  {
      //gap loop
      for(j=0;j<=n-1-i;j++)
      {
          printf(" ");
      }
      //printing loop
     for(k=0;k<i;k++)
     {
         printf("# ");
         
     }
     printf("\n");
  }
 
 

    return 0;
}
