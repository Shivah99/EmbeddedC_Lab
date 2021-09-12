#include <stdio.h>
int main() 
{
    char s1[100];
    scanf("%[^\n]100s",s1);
    printf("\nrandom Characters of string:%s",s1);
    mystrlwr(s1);
    printf("\nLower characters of string: %s",s1);
}
void mystrlwr(char s[])
{
    int i;
    for (i=0;s[i]!='\0';i++)
        if(s[i]>='a' && s[i]<='z')
        {
            s[i]=s[i]-32;   
}
}
