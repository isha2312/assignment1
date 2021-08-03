// implementing stacks using arrays


#include <stdio.h>
#include <stdlib.h>
#define MAX 6
int stack [MAX];
int top=-1;

void push()
{
    int data;
    
    if(isfull())
    printf("\n stack overflow");
     
    else
    {
        top=top+1;
        printf("Enter element to push ");
        scanf("%d",&data);
        stack[top]=data;
        
        printf("Data pushed, enter 4 to display\n");
    }
}

void pop()
{
    
    if(isempty())
    printf("\n stack underflow");
    
    else
    {
        printf("poped element is: %d\n", stack[top]);
        top=top-1;
    }
}


void peek()
{
   printf("Element at peek: %d",stack[top]); 
}


int isfull()
{
    if(top==MAX-1)
    return 1;
    
    else
    return 0;
}

int isempty()
{
    if(top==-1)
    return 1;
    
    else
    return 0;
}

void display()
{
    int i;
    if(top==-1)
    {
        printf("\nstack empty");
    }

    
    
    else
    {
        printf("Elements in stack are: ");
        for(i=0;i<=top;i++)
        {
            printf("%d ",stack[i]);
        }
        printf("\n");
    }
}


int main()
{
     
     int choice;
     
     //enter the choice to perform any operation
     while(1)
     {
         printf("\n 1.Push");
         printf("\n 2.Pop");
         printf("\n 3.Peek");
         printf("\n 4.Display");
         printf("\n 5.Exit");
         
         printf("\n Enter your choice: ");
         scanf("%d",&choice);
         
         switch(choice)
         {
             case 1: 
             push();
             break;
             
             case 2:
             pop();
             break;
             
             case 3:
             peek();
             break;
             
             case 4:
             display();
             break;
             
             case 5:
             exit(0);
             
             default:
             printf("/n Invalid option");
             
         }
     }

    return 0;
}
