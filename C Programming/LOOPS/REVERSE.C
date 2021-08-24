#include<stdio.h>
int main()
{
int n,m,r;
printf("Enter n: ");
scanf("%d",&n);
for(r=0;n!=0;)
{
    m=n%10;
    r=r*10+m;
    n=n/10;
}
    printf("reverse=%d",r);
}

