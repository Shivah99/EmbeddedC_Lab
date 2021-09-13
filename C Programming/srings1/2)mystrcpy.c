#include<stdio.h>
int main() 
{
    char s1[100], s2[100], i;
    printf("Enter string s1: ");
    scanf("%s",s1);
    mystrcpy(s2,s1);
    printf("Copied String s2: %s", s2);
    return 0;
    
}
void mystrcpy(char s2[],char s1[])
{
    int i;
    for (i = 0; s1[i] != '\0'; ++i) {
        s2[i] = s1[i];
    }
    s2[i] = '\0';
}