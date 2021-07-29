//4. reverse the given 1 D array

#include <stdio.h>

void reverse(int *p,int n)
{
    
    int b[n];
    int k=n-1;
    for(int j=0;j<n;j++)
    {
        b[k]=*(p+j);
        k--;
    }
    for(int h=0;h<n;h++)
    {
        *(p+h)=b[h];
    }
}

int main()
{
    int n;
    
    printf("Enter size of array ");
    scanf("%d",&n);
    
  int a[n];
  
  printf("Enter array elements ");
  for(int i=0;i<n;i++)
  scanf("%d",&a[i]);
  
  //calling array with refrence
  reverse(a,n);
  
  //printing array after reverse
   printf("[");
  for(int i=0;i<n;i++)
  {
    printf("%d ",a[i]);  
  }
   printf("]");
  
    return 0;
}
