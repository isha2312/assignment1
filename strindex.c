//12. function that returns the rightmost occureance of string t in string s

#include <stdio.h>
#include<string.h>

int strindex(char*s,char*t)
{
   
   char s1[50];
   int i,j,k,pos,flag,l=0;
	
	//finding length of string s
	for(i=0;s[i] != '\0'; i++)
	{
	 l++;
	}
	//storing string s in s1
	for(i=0;s[i] != '\0'; i++)
    {
		s1[i]=s[i];	
	}
	s1[i]='\0';  
	
	for(i=l-1;i>0;i--)
	{
	    flag=0;
	    k=i;
	    for(j=0;t[j]!='\0';j++)
	    {
	        if(s1[k]!=t[j])
	        {
	            flag=1;
	            break;
	        }
	        k++;
	    }
	    //if string matches then it returns the position
	    if(flag==0)
	    {
	     pos=i;
          break;
	    }
	}
	//if string don't match,it returns -1
	if(flag==1)
	pos=-1;
	
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
   p= strindex(str1,str2);
printf("%d",p);
    return 0;
}
