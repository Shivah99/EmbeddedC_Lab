#include <stdio.h>
int main()
{
int a,b,c;
scanf("%d%d",&a,&b);
printf("a=%d b=%d ",a,b);
c = a>b?a:b;
printf("\n Biggest number of a&b is = %d",c);
return 0;
}
