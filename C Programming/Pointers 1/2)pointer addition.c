#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter a,b values: ");
    float *c=&a,*d=&b;
    scanf("%f%f",c,d);
    printf("addition= %.2f",*c+*d);       
}