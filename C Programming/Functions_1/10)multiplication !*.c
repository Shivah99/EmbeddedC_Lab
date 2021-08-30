#include <stdio.h>
int mul(int x, int y);
int main()
{
    int a,b;
    printf("Enter a value: ");
    scanf("%d",&a);
     printf("Enter b value: ");
    scanf("%d",&b);
    mul(a,b);
    
}
int mul(int x,int y)
{
    int mul=0;
    if(y!=0)
    mul=mul+x;
    printf("Multiplication of %dX%d=%d",x,y,mul);
}