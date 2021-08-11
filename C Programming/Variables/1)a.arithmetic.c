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
printf("\n\n");
printf("%d",b);
printf("%d\b ",c);
printf("%d\b\b  ",d);
printf("%d\b\b\b   ",e);
printf("\n\n");
printf("%d\b\b\b   \n",e);
printf("%d\b\b  \n",d);
printf("%d\b \n",c);
printf("%d\n",b);
printf("\n\n");
b=a/1;
c=a/10;
d=a/100;
e=a/1000;
printf("%d\b\b  \n",c);
printf("%d \n",d);
printf("%d \n",c);
printf("%d\n",a);
printf("\n\n");
printf("%d\n",a);
printf("%d \n",c);
printf("%d \n",d);
printf("%d\b\b  \n",c);
return 0;
}
