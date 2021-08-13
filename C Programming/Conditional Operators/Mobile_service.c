#include <stdio.h>
int main()
{
float n,nbill,bill=250;
    scanf("%f",&n);
    printf("\nEnter the no.of calls made:%f\n",n);
nbill=(n<=100)?(bill):(bill+(1.25+n-100));
printf("the net bill for more than 100 calls made:%0.2f",nbill);
return 0;
}
