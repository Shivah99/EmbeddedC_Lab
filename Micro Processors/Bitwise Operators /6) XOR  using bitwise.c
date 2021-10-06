#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,x,y,xor;
    printf("Enter x: \n");
    scanf("%d",&x);
     printf("Enter y: \n");
    scanf("%d",&y);
    xor = ((~x) & y) | (x & (~y));
    printf("xor of %d ^ %d is: %d",x,y,xor);
    return 0;
}