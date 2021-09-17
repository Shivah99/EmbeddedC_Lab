//dt: 16/09/2021
#include<stdio.h>
#define size 100
int myatoi(char s1[]);
int main()
{
    char s1[size];
    printf("Enter a numeric string: ");
    scanf("%99[^\n]",s1);
   if(IsNumericString(s1)==1)
        printf("Integer= %d",myatoi(s1));
    else
        printf("Entered string is not a valid numeric string.");
   
  
}
int IsNumericString(char s1[])
{
int i;

for(i=0;s1[i]!=0;i++)
{ 
    if (s1[i] >= '0' && s1[i] <= '9')
   return 1;
  else
   return 0;
}
}
int myatoi(char s1[])
{
    
int i, c=0;
for(i=0;s1[i]!='\0';i++)
{
    
        
  
c=c*10+s1[i]-'0';

	}
return c;
}