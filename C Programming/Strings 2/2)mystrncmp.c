#include <stdio.h>
#include<string.h>
int main()
{
char str1[20];
    printf("ENter str1: ");
   scanf(" %19s",str1); 
char str2[20];
    printf("ENter str2: ");
 scanf(" %19s",str2);
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    if(mystrncmp(str1,str2,n)==1)
        printf("The strings str1 and str2 are equal");
       else 
           printf("The string str1 and str2 are unequal");
}
int mystrncmp(char str1[],char str2[],int n)
{
int  i, count=0;
for(i=0; i<n; i++){
if(str1[i] == str2[i])
count++;
}
if(n == count)
return 1;
else
return 0;
}