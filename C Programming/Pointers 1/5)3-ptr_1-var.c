#include<stdio.h>
int main()
{
    int *p,*q,*r;
    int a=10;
    p=&a;
    q=&a;
    r=&a;
    printf("\n%d %u",p,*p);
    printf("\n%d %u",q,*q);
    printf("\n%d %u",r,*r);
    printf("\n a:");
    scanf("%d",p);
    printf("\n%d %u",p,*p);
    printf("\n a:");
    scanf("%d",q);
    printf("\n%d %u",q,*q);
    printf("\n a:");
    scanf("%d",r);
    printf("\n%d %u",r,*r);
}