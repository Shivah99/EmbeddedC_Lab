#include <stdio.h>
int main()

{

int i=1,n,fac=1;

printf("Enter n:");

scanf("%d",&n);

while(i<=n)

{

fac=fac*i;

i++;

}

printf("fac=%d",fac);
}