//7. print all input lines that are longer than 80 characters

//programs prints the line if it contains more than 80 characters.

#include <stdio.h>
#define MAXLINE 1000 // The maximum length of the allowed input line 
 
int get_line(char [], int);

 
int main() {
         int l; // current line length 
         int max; // The length of the longest line found
         char line[MAXLINE]; // current input line 
 
    max = 10;
    while ((l = get_line(line, MAXLINE)) > 0) {
        if (l > max) {
            printf("%s", line);
        }
    }
    return 0;
}
 

 // get_line function: read a line into s and return its length
   
  
int get_line(char s[], int lim) {
    int c, i;
    int j;
    j = 0;
    for (i = 0; (c=getchar()) != EOF && c != '\n'; ++i) {
        if (i < lim - 2) {
            s[j++] = c;
        }
    }
    if (c == '\n') {
        s[j++] = c;
        ++i;
    }
    s[j] = '\0';
    return i;
      //returns the character length of the line
}
