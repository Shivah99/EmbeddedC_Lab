#include<stdio.h>
int main()
{
    int x;
    printf("Enter x: ");
    scanf("%d",&x);
    if(x&0x01)
        printf("%d is Odd",x);
    else
         printf("%d is Even",x);
printf("\n");
}
