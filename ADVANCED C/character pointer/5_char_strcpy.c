#include <stdio.h>

char* strcpy(char *str1, char *str2)
{
    while (*str2 != '\0')
    {
        *str1++ = *str2++;   
    }
    str1= '\0';
}
int main()
{
    char s1[100];
    char s2[100];
    printf("Enter string1: ");
    scanf("%s",s1);   
    printf("Enter string2: ");
    scanf("%s",s2);  
    strcpy(s1, s2);
    printf("String1 after copy :%s\n", s1);
    return 0;
}
