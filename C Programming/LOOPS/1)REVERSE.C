#include<stdio.h>
int main()
{
int n,rem,rev;
printf("Enter n: ");
scanf("%d",&n);
for(rev=0;n!=0;)
{
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
}
    printf("reverse=%d",rev);
}

