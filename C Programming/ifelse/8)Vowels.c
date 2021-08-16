#include<stdio.h>
int main()
{
    char ch; 
    printf("entered the character: "); 
    scanf("%c",&ch); 
    if (ch == 'A') 
    printf("%c is a vowel",ch); 
    else if (ch=='E') 
    printf("%c is a vowel ",ch); 
    else if (ch=='I') 
    printf("%c is a vowel ",ch); 
    else if (ch=='O') 
    printf("%c is a vowel ",ch); 
    else if (ch=='U') 
    printf(" %c is a vowel ",ch); 
    else if (ch == 'a')
    printf("%c is a vowel ",ch); 
    else if (ch=='e') 
    printf("%c is a vowel ",ch); 
    else if (ch=='i') 
    printf("%c is a vowel ",ch); 
    else if (ch=='o') 
    printf("%c is a vowel ",ch); 
    else if (ch=='u') 
    printf("%c is a vowel ",ch);
    else
    printf("is not a Vowel");

return 0;
}