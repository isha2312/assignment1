/*Write the function htoi(char s), which converts a string of hexadecimal 
digits (including an optional 0x or 0X) into its equivalent integer value. The allowable digits are 0 through 9, 11 through f, and A through F*/


#include <stdio.h>
#include<math.h>

void htoi(char* s)
{
    int h,i,n;
    i = 0;
    
    //checking if string includes 0x or 0X)
    if( *(s+i) == '0')
     {
    ++i;
    if(*(s+i) == 'x' || *(s+i) == 'X')
        ++i;
    }

    n = 0;
    int flag=1;

//convert a string of hexadecimal digits into integer value
    for(;flag==1;++i)
    {
    if(*(s+i) >='0' && *(s+i) <='9')
        h= *(s+i) - '0';
        
    else if(*(s+i) >='a' && *(s+i) <='f')
        h= *(s+i) -'a' + 10;
        
    else if(*(s+i) >='A' && *(s+i) <='F')
        h= *(s+i) -'A' + 10;
    else
        flag = 0;

    if(flag==1)
        n = 16 * n + h;
    }
  printf("%d",n);
}


int main()
{
   
    char str[50];
  printf("Enter string ");
  
  //for scanning the string with spaces without gets.
  scanf(" %[^\n]s",str);

    htoi(str);
    return 0;
}
