#include<stdio.h>
int main()
{
    int a,b,c,d;
    int *p,*q,*r;
    p=&a;q=&b;r=&c;
    printf("Enter the a,b,c Values: \n");
    scanf("%d%d%d",p,q,r);
    if(*p>*q)
    {
        if(*p>*r)
            printf("a=%d is bigger",*p);
        else
            printf("c=%d is bigger",*r);
    }
    else 
    {
        if(*q>*r)
    printf("b=%d is bigger",*q );
            else
                printf("c=%d is bigger",*r);
    }
return 0;
}