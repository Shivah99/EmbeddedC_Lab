#include<stdio.h>
int mystrcmp(char *strg1, char *strg2);

int main()
{
    char s1[100];
    char s2[100];
    printf("Enter string1: ");
    scanf("%s",s1);   
    printf("Enter string2: ");
    scanf("%s",s2);  
    printf("%d", mystrcmp(s1, s2) );

    return 0;
}

int mystrcmp(char *str1, char *str2)
{

    while( ( *str1 != '\0' && *str2 != '\0' ) && *str1 == *str2 )
    {
        str1++;
        str2++;
    }

    if(*str1 == *str2)
    {
        return 0; 
    }

    else if(*str1 < *str2)
    {
        return -1;
    }
    else
        return 1;
}
