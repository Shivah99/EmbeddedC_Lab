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
mystrstr(str1,str2);
  
}
void mystrstr(char str1[],char str2[])
{
int i, j, k, m, count = 0;
for(i = 0; str2[i] !='\0'; i++);
for(j = 0 ; str1[j]!='\0'; j++)
{
if(str1[j] == str2[0])
{
for(k = 0 ; k < i;k++)
{
if(str1[j]==str2[k]){
j++;
count++;
}
}
if(count == i)
{
for(m=j-i; str1[m]!='\0'; m++)
printf("%c",str1[m]);
}
}
}
return 0;
}