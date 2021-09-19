#include <stdio.h>
#include<string.h>
int main()
{
char str1[30],ch;
    printf("Enter s1: ");
 scanf(" %[^\n]", str1);
    printf("Enter ch:");
    scanf(" %c", &ch);
    if(mystrrchr(str1,ch));
   
}
void mystrrchr(char str1[],char ch)
{
char i, j, k;
for(i=0; str1[i]!='\0'; i++);
for(j=i-1; j>=0; j--)
{
if(str1[j]==ch)
{
for(k=j; k<i; k++)
printf("%c",str1[k]);
return 0;
}
}
return 0;
}