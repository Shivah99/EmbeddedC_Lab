#include<stdio.h>

char mystrlen(char *s)
{
    int c=0;
    while(*s!='\0')
    {
       s++;
        c++;
    }
    return c;
}

int main()
{
    char s[100];
    int d;
    printf("Enter a String: ");
    scanf("%s",s);
    printf("Length of String: %d",mystrlen(s));
    return 0; 
}