#include<stdio.h>
int main()
{
int a,b,c,d,e,f;
float p;
printf("\nEnter the marks in a,b,c,d,e,f: ");
scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
p=(float)(a+b+c+d+e+f)/600*100;
printf("p=%.2f\n",p);
if(p>=80 && p<=100)
printf("Honours");
else if(p>=60 && p<80)
printf("First Division");
else if(p>=50 && p<60)    
 printf("Second Division");
else if(p>=40 && p<50)
printf("Third Division"); 
 else
 printf("FAIL");

    return 0;
}