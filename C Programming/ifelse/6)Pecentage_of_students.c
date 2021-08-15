#include<stdio.h>
int main()
{
float p,t;
printf("enter the total marks out of 600: ");
scanf("%f",&t); //p=percentage
 p=(t/600)*100;  
if(p>100)
{
    printf("Entered marks over the total marks, please recalculate and enter");
}
else if(p>=80)
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
}
return 0;
}