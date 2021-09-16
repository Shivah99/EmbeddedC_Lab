#include<stdio.h>
#define size 20
int main()
{
    char str1[size],str2[size];
    printf("Enter Str1: ");
    scanf(" %[^\n]", str1);
     printf("Enter Str2: ");
    scanf(" %[^\n]", str2);
       int n;
    printf("Enter n:");
    scanf("%d",&n);
    myStrncpy(str1,str2,n);
    printf("%s",str1);
}
void myStrncpy(char str1[], char str2[], int num)
{
    int i; 
    for(i=0;str1[i]!='\0';i++)
    {
    if(i < num)
   {
   str1[i] = str2[i];
   }
    else if(i > num)
   {
    str2[i] = '\0';
    }
    }
}
