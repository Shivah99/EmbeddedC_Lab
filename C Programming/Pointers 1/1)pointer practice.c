#include<stdio.h>
int main()
{
    int a=10;
    int *p;

    printf("\nAddress of a variable , its value ,its size = \n%u, %d, %d",&a,a,sizeof(*p));
        p=&a;
    printf("\naddress of a Pointer , its value ,its size =\n %u , %d, %d",&p,*p,sizeof(*p));
}