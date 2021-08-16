#include<stdio.h>
main()
{
int a,b,c,d;
printf("Enter the value of a,b,c,d: ");
scanf("%d %d %d %d",&a,&b,&c,&d);
if(a>b)
    {
    if(a>c)
        {
        if(a>d)
        {
        printf("a is greater %d",a);
        }
        else
        {
        printf("d is greater %d",d);
        }
        }
        else
        {
        if(c>d)
        {
        printf("c is greater %d",c);
        }
        else
        {
        printf("d is greater %d",d);
        }
        }
        }
else
{
if(b>c)
{
if(b>d)
{
printf("b is greater %d",b);
}
else
{
printf("d is greater %d",d);
}
}
else
{
if(c>d)
{
printf("c is greater %d",c);
}
else
{
printf("d is greater %d",d);
}}}
return 0;}