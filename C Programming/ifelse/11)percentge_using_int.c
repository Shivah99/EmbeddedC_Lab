#include<stdio.h>
int main()
{
int a,b,c,d,e,f;
float p,t;
printf("enter the total in MPMC :");
scanf("%d",&a);
printf("enter the total in C_progamming:");
scanf("%d",&b);
printf("enter the total in English:");
scanf("%d",&c);
printf("enter the total in Networking:");
scanf("%d",&d);
printf("enter the total in Analog:");
scanf("%d",&e);
printf("enter the total in Digital:");
scanf("%d",&f);
 //p=percentage
p=(float)(a+b+c+d+e+f)/600*100;
  
printf("\nyour percentage=%0.2f\n",p);
if(p>100)
{
    printf("\nFailed!!\nOr\nEntered marks over the total marks, please recalculate and enter");
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
     if(p<40)
    {
        printf("FAIL");
    }
   
}
return 0;
}
  