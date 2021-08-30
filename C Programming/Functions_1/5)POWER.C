#include<stdio.h>
void main() 
{
    int n,a;
    printf("Enter the base");
    scanf("%d",&n);
    printf("Enter the exponent");
    scanf("%d",&a);
    power(n,a);
}
 
void power(int n,int a)
{
    int power=1;
    while(a>0)
    {
        power=power*n;
        a--;
    }
    printf("power = %d",power);
}
