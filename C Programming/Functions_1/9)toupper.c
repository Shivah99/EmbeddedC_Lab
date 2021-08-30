#include <stdio.h>
 char  toupper(char);
int main()
{

     char ch;
    printf("enter the Alphabet:");
    scanf(" %c",&ch);
    printf("%c in uppercase is represented as  %c",ch,toupper(ch));
 
    return 0;
}