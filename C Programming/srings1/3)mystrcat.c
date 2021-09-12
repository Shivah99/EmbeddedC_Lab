#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50],s2[50];
    printf("string1: ");
    scanf("%s",s1);
    printf("\nstring2: ");
    scanf("%s",s2);
    mystrcat(s1,s2);
    printf("\n%s",s1);
    return 0;
    
}
void mystrcat(char s1[],char s2[])
{   
    int i,j;
    for(i=0;s1[i]!='\0';i++);
    for(j=0;s2[j]!='\0';j++,i++)
    s1[i]=s2[j];
    s1[i]='\0';
}