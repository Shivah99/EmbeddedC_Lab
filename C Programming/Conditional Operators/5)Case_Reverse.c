#include <stdio.h>
int main()
{
char ch,d;
     printf("Enter the alphabet:");
    scanf("%c",&ch);
   
    d=ch>=97?ch-32:ch+32;
    
       printf("Case reverse is '%c'",d);
    return 0;
}

