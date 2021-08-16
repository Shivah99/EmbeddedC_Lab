#include<stdio.h>
int main()
{
int a,b,c,d;
printf("\nEnter a,b,c,d: ");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a>b && a>c && a>d)
printf("%d is bigger",a);
else if(b>a && b>c && b>d)
printf("%d is bigger",b);
else if(c>a && c>b && c>d)
printf("%d is bigger",c);
else
printf("%d is bigger",d);
return 0;
    
    
}