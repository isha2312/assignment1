//10. function squeeze (s1, s2) that deletes each character in s1 that matches any character in string s2

#include <stdio.h>

void squeeze(char*s1,char*s2)
{
   int i,j,k;
	for(k = 0; s2[k] != '\0'; k++)
	{
	    j=0;
		for(i =0; s1[i] != '\0'; i++)
		{
			if(s1[i] != s2[k])
				s1[j++] = s1[i];
		}
		s1[j] = '\0';
	}
} 

int main()
{
  
    char str1[50],str2[50];
    
    //scanning first string
  printf("Enter string1 ");
  scanf(" %[^\n]s",str1);
  
  //scanning second string
  printf("Enter string2 ");
  scanf(" %[^\n]s",str2);

    //calling function
    squeeze(str1,str2);
printf("%s",str1);
    return 0;
}
