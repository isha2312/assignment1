//13.function strend(s, t), which checks if the string t occurs at the end of the string s

#include <stdio.h>
#include<string.h>

int strend(char*s,char*t)
{
   
   char s1[50];
   int i,j,k,pos,flag=0,p,f;
	int l1=0,l2=0;
	
	//finding length of strings
	for(p=0;s[p]!='\0';p++)
	{
	    l1++;
	}
	for(f=0;t[f]!='\0';f++)
	{
	    l2++;
	}
	
	int l=l1-l2;
	   
	
	   for(i=l;i<=l1-1;i++)
	   {
	       for(j=0;t[j]!='\0';j++)
	       {
	        if(t[j]==s[i])
	        {
	            flag=1;
	            break;
	        }
	        
	    }
	   }
	    //if string matches then returns 1
	    if(flag==1)
	    pos=1;
	   
	   //if string don't match 
	   else
	    pos=0;
	 
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
   p= strend(str1,str2);
printf("%d",p);
    return 0;
}
