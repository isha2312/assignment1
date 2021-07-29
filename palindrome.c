//6. check if the given string is palindrome or not, considering only alphanumeric characters and ignoring cases


#include<stdio.h>
#include<string.h>

//function to check string is palindrome or not
int Palindrome(char *str)
{
    int l = 0,len=0,p,i;
    
    for(p=0;str[p]!='\0';p++)
    {
        len++;
    }
    int h =len- 1;
  
    // Lowercase string
        while (str[i] != '\0')
  {
    if (str[i] > 64 && str[i] < 91)
      str[i] += 32;
    i++;
  }
  
    
    while (l <= h) {
  
        // If there is another symbol in left
        if (!(str[l] >= 'a' && str[l] <= 'z'))
            l++;
  
        // If there is another symbol in right
        else if (!(str[h] >= 'a' && str[h] <= 'z'))
            h--;
  
        // If characters are equal
        else if (str[l] == str[h])
            l++, h--;
  
        // If characters are not equal
        else
            return 0;
    }
  
    // Returns 1 if sentence is palindrome
    return 1;
}
  

int main()
{
  char str[50];
  printf("Enter string ");
  //for scanning the string with spaces without gets.
  scanf(" %[^\n]s",str);
  
    if (Palindrome(str))
        printf("true");
    else
        printf("false");
  
    return 0;
}
