#include<stdio.h>
int main()
{
    float n;
    printf("Enter a number:");
    scanf("%f",&n);
    if(n!=0)
    {
        printf("\nThe right-most digit of the integral part of the number is:%d",(int)n%10);
    }
    else
    {
        printf("Enter a valid number");
    }

    return 0;
}