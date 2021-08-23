#include<stdio.h>
int main()
{

int n,i=1,prv=0,prs=1,sum; 
printf("Enter n:"); 
scanf("%d",&n);

while(i<=n)
{
printf("%d ",prv);

sum=prv+prs;

prv=prs;

prs=sum;

i++;

}

}