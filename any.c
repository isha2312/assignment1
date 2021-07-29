//11. function that returns first location in string1 that matches any char in string 2 

#include <stdio.h>

int any(char*s1,char*s2)
{
   int i,k,pos,flag=0;
   
	for(k = 0; s2[k] != '\0'; k++)
	{
	for(i =0; s1[i] != '\0'; i++)
   {
			if(s1[i] == s2[k])
			{
				pos=i;
				flag=1;
				break;
			}
		}
		//if a char matches in string 1
		if(flag==1)
		break;
		
		//if no char matches
		else
		pos=-1;
		
	}
	return pos;
} 

int main()
{
  
    char str1[50],str2[50];
    int p;
    //scanning first string
  printf("Enter string1 ");
  scanf(" %[^\n]s",str1);
  
  //scanning second string
  printf("Enter string2 ");
  scanf(" %[^\n]s",str2);

    //calling function
   p= any(str1,str2);
printf("%d",p);
    return 0;
}
