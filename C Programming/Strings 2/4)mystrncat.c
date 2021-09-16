#include <stdio.h>
#include<string.h>
int main()
{
char str1[30];
    printf("Enter s1: ");
 scanf(" %[^\n]s", str1);
char str2[30];
     printf("Enter s2: ");
     scanf(" %[^\n]s", str2);
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    mystrncat(str1,str2,n);
    printf("%s",str1);
    return 0;
}
int mystrncat(char str1[],char str2[],int n)
{
int i, j;
for(i=0; str1[i]!='\0';i++);
for (j=0;j<n;j++,i++)
{
str1[i] = str2[j];
}

return 0;
}
