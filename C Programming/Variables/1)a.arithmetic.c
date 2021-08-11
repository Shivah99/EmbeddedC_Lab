
#include <stdio.h>

int main()
{
int a,b,c,d,e;
printf("Enter a: ");
scanf("%d",&a);
b=a%10;
c=a%100;
d=a%1000;
e=a%10000;
printf("%d\n",b);

printf("%d\b \n",c);
printf("%d\b\b  \n",d);
printf("%d\b\b\b   \n",e);
return 0;
}