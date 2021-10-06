#include<stdio.h>
int main()
{
    int a=1,b=0;
    while(a!=0)
    {
        a=a<<1;
            b++;
    }
    b=b/8;
    printf("%d",b);
    return 0;
}