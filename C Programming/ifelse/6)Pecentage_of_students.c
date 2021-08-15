#include<stdio.h>
int main()
{
int p;
scanf("%d",&p);
if(p>=80)
{
    printf("HONOURS");
}
else if(p>=60)    
{
    printf("FIRST DIVISION");
}
   else if(p>=50) 
   {
       printf("SECOND DIVIDION");
   }
    else if(p>=40)
    {
        printf("THIRD DIVIDION");
    }
    else if(p<40)
    {
        printf("FAIL");
    }
else
{
    printf("Enter the correct percentage");
}return 0;
}