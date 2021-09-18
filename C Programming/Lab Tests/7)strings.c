//dt: 16/09/2021
//Problem Statement # Write a program to read a numeric string and convert it to an integer ( Own implementation of atoi library function).Write three functions 
//1 ) main function to read the string, validate it (if it is numeric or not) and call myatoi function, and print the return integer value.
//2) myatoi function to Receive the numerical string as input argument and return the equivalent integer as output.
//3) IsNumericString function to Validate the string if it is a valid numeric string or not. returns 1 if the entered string can be converted to an integer. Otherwise returns 0.
//eg1., input a numeric string(read using %s) : 257 output integer(printed using %d): 257 
//eg2: inpit a numeric string : 23k   output :  Entered string is not a valid numeric string.
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