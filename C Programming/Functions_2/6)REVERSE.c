#include<stdio.h>
int rev(int);
int main()
{
int n,r;
printf("Enter n");
scanf("%d",&n);
 r=rev(n);
    printf("reverse=%d",r);
}
int rev(int n)
{
    int m,r;
for(r=0;n!=0;)
{
    m=n%10;
    r=r*10+m;
    n=n/10;
}
    return r;
}