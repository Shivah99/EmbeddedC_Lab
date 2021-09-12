#include<stdio.h>
#define size 100
int main()
{
    int i;
    char s1[size]={};
    printf("\nEnter string: ");
    scanf("%s",s1);
    printf("Before copy-s1[]=");
    for(i=0;i<size;i++)
    printf("%c",s1[i]);
    printf("\t");
    mystrcpy(s1);

}
int mystrcpy(char s1[])
{
   int i;
    char s2[size];;
    
    printf("\nAfter copy-s2[]=");
    for(i=0;i<size;i++)
    {
        s2[i]=s1[i];
    printf("%c",s2[i]);  
}}