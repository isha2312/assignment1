//15. reverse polish notation.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define size 100 //defining max size

int Stack[size];

int height=0;
int flag=1;

void push(int n)
{
    if(height==size)
    {
    printf("You can't push more arguments ");
    flag=0;  //so this does not keeps executing
    }
    else{
        Stack[height]=n;
        height++;
    }
}

int pop()
{
    if(height==0)
    {
    printf("STACK EMPTY ");
    flag=0;
    }
    else{
        return Stack[--height];
    }
}

int main()
{
    char str[100];
    
    printf("Enter the expression\n");
    scanf("%[^\n]",str);
    
    int i,val;
    //printf("%d ",atoi(str));
    for(i=0;str[i]!='\0';i=i+2)  //because we have to ignore spaces
    {
        if(flag==0)
        break;
        if(str[i]>='0'&&str[i]<='9')
        {
            //printf("%d\n",str[i]-'0');
            //converting to digits 
        push(str[i]-'0');
        }
        else if(str[i]=='+')
        {
            val=pop();
            push(pop()+val);
        }
        else if(str[i]=='-')
        {
            val=pop();
            push(pop()-val);
        }
        else if(str[i]=='*')
        {
            val=pop();
            push(pop()*val);
        }
        else if(str[i]=='/')
        {
            val=pop();
            push(pop()/val);
        }
        else if(str[i] == '^')
        {
            val=pop();
            push(pow(pop(), val));
        }
        
    }
    printf("%d ",pop()); //final element will be the ans
    return 0;
}

