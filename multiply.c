//5. multiply the 2 matrices.

#include <stdio.h>
void multiply(int[10][10],int[10][10],int,int);
int main()
{
    int a[10][10],b[10][10];
    int r,c,i,j,k;    
  
  printf("enter number of row");    
  scanf("%d",&r); 

  printf("enter number of column");    
  scanf("%d",&c); 

  printf("enter elements of first matrix\n");    
  for(i=0;i<r;i++)    
  {    
    for(j=0;j<c;j++)    
    {    
      scanf("%d",&a[i][j]);    
    }    
  } 

   printf("enter elements of second matrix\n");    
   for(i=0;i<r;i++)    
   {    
     for(j=0;j<c;j++)    
     {    
       scanf("%d",&b[i][j]);    
     }    
   }  

//calling function for multiplying matrices
multiply(a,b,r,c);

    return 0;
}

void multiply(int c[10][10],int d[10][10],int row,int col)
{
    int m[10][10];
    int i,j,k;
    printf("multiply=\n");  
 
    for(i=0;i<row;i++)    
    {    
      for(j=0;j<col;j++)    
      {    
       m[i][j]=0;    
         for(k=0;k<col;k++)    
          {    
          m[i][j]+=c[i][k]*d[k][j];    
          }    
      }    
    }

  //for printing result    
   for(i=0;i<row;i++)    
   {    
     for(j=0;j<col;j++)    
     {    
       printf("%d\t",m[i][j]);    
     }    
   printf("\n");    
   }  

}
