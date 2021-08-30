//8.  function reverse(char* s)  that reverses the character string

#include <stdio.h>

void reverse(char* s)
{
    char r[50];
 int begin, end, count = 0;
 
 //finding string length
 while (s[count] != '\0')
      count++;

   end = count - 1;

   for (begin = 0; begin < count; begin++) {
      r[begin] = s[end];
      end--;
   }

   r[begin] = '\0';

   printf("%s\n", r);
}

int main()
{
    char str[50];
  printf("Enter string ");
  //for scanning the string with spaces without gets.
  scanf(" %[^\n]s",str);

//calling reverse function
reverse(str);
    return 0;
}
