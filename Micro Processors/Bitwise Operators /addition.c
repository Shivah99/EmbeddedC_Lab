#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,x,y;
    printf("Enter x: \n");
    scanf("%d",&x);
     printf("Enter y: \n");
    scanf("%d",&y);
    a=x;
    b=y;
    while (y!= 0)
    {
        int carry= x & y;
        x=x^y;
        y=carry<<1;
    }
    printf("Sum of %d and %d is: %d",a,b,x);
printf("\n");
    return 0;
}
