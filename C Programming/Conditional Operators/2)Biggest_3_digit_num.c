#include <stdio.h>
int main()
{
int a,b,c,d;
scanf("%d%d%d",&a,&b,&c);
printf("a=%d b=%d c=%d\n",a,b,c);
d = a>b?(a>c?a:c):(b>c?b:c);
printf("\n Biggest number  is = %d",d);
return 0;
}
