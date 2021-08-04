//14.  versions of the library functions strncpy, strncat, and strncmp

#include <stdio.h>

void str_n_cat(char *s, char *t, int n)
{
    
    //s =destination string
    //t= source string
    
    int l1=0,l2=0,i,j;
    while(s[l1]!='\0')
    {
	    l1++;
    }
    while(t[l2]!='\0')
    {
            l2++;
    }

  //concatinating from source to destination
    for(i=l1,j=0;i<l1+n,j<n;i++,j++)
    {
        s[i]=t[j];
    }
    s[l1+n]='\0';
}


void str_n_cpy(char *s,char *t,int n)
{
    int i;
    
    //copying n characters from source to destination
    for( i=0;i<n;i++)
    {
        s[i]=t[i];
    }
    s[i]='\0';
    
}


int str_n_cmp(char *s,char *t,int n)
{

    int i = 0;
	while(*s == *t && i++ < n)
	{
		if(*s == '\0')
		{
			return 0;
		}
	}
	return *s - *t;
}


int main()
{
   char source[100],dest1[100],dest2[100];
   int n;
   
   printf("Enter destination string\n");
   scanf(" %[^\n]s",dest2);
   
   printf("Enter source string\n");
  scanf(" %[^\n]s",source);
   
   printf("Enter n\n");
   scanf("%d",&n);
   
   //copying
   printf("After copying n characters we get \n");
   str_n_cpy(dest1,source,n);
   printf("%s\n",dest1);
   
   //concatinating
   str_n_cat(dest2,source,n);
   printf("After concatinating n characters get \n");
   printf("%s\n",dest2);
   
   //comparing
   printf("Comparing the strings:\n");
   
   char str1[100],str2[100];
   int num;
   
   printf("Enter string 1\n");
   scanf(" %[^\n]s",str1);
    
    printf("Enter string 2\n");
    scanf(" %[^\n]s",str2);
    
    printf("Enter no of characters to compare\n");
    scanf("%d",&num);
   printf("After comparing first %d characters\n",num);
   
   int res=str_n_cmp(str1,str2,num);
   
    if(res<0)
   printf("str2 is greater \n ");
   if(res>0)
   printf("str2 is less ");
   if(res==0)
   printf("strings are equal \n");

    return 0;
}
