#include<stdio.h>
int main()
{
int a;
printf("Enter a "); 
scanf("%d",&a);
if(a>0)
{
    printf("The Entered number is a positive number");
}
else if(a<0)
{
    printf("The Entered number is a negative number");
}
else
{
   a=0;
    printf("The Entered number is zero");
}
return 0;
}