#include<stdio.h>
int main()
{
    int a,b,c;
    int *p;
    p=&a;
    printf("\nEnter a value: ");
    scanf("%d",&a);
    printf("%d",*p);
     p=&b;
    printf("\nEnter b value: ");
    scanf("%d",&b);
  printf("%d",*p);
     p=&c;
    printf("\nEnter c value: ");
    scanf("%d",&c);
  printf("%d",*p);
}