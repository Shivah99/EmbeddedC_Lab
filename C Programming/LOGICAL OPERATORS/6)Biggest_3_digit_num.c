#include<stdio.h>
int main()
{
int a,b,c;
printf("\nEnter a,b,c: ");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
printf("%d is bigger",a);
else if(b>a && b>c)
printf("%d is bigger",b);
else
printf("%d is bigger",c);
return 0;
    
    
}