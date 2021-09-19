#include<stdio.h>
#define MAX(x,y) x>y?x:y
int main()
{
    int x,y;
    printf("Enter values of a&b: ");
    scanf("%d%d", &x, &y);
    printf("max of x&y = %d",MAX(x,y));
}