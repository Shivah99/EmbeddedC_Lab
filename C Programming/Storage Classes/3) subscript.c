#include<stdio.h>
int main()
{
    int n;

    subscript(n);
    
}
int subscript(int n)
{
        loop:
    printf("Enter number:");
    scanf("%d",&n);
    if ((n % 10 == 1) && (n % 100 != 11))
        printf("\nI am called %dst time.\n ", n);
    else if ((n % 10 == 2) && (n % 100 != 12))
        printf("I am called %dnd time.\n", n);
    else if ((n % 10 == 3) && (n % 100 != 13))
        printf("I am called %drd time.\n ", n);
    else
        printf("I am called %dth time.\n ", n);
    goto loop;
}