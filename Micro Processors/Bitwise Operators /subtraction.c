#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,x,y,borrow;
    printf("Enter x: \n");
    scanf("%d",&x);
     printf("Enter y: \n");
    scanf("%d",&y);
a=x;b=y;
    for (;y!= 0;)
    {
        int borrow=(~x) & y;
        x=x^y;
        y=borrow<<1;
    }
    printf("%d - %d = %d",a,b,x);
printf("\n");
return 0;
}
