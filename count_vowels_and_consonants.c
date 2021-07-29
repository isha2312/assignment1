//3.find the count of the number of vowels and consonants in the given string

#include <stdio.h>
#include <string.h>

int main()
{
  char str[50];
  printf("Enter string ");
  //for scanning the string with spaces without gets.
  scanf(" %[^\n]s",str);
  
 int i=0,cv=0,cc=0;
 
 while(str[i]!='\0')
 {
     //counting no of vowels
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')   
      {
        cv++;
       }
    //counting no of consonnts
    else
    {
        cc++;
    }
    
    i++;
 }
 printf("Vowels:%d and consonants:%d",cv,cc);
  
    return 0;
}
