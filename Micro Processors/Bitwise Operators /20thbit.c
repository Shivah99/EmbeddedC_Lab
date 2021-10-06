#include <stdio.h>
int main()
{   
    int p=20,x;
    printf("enter a 32 bit number\n");
    scanf("%d",&x);
    x=x>>p;
    if(x&1)
    printf("%d th bit is set\n",p);
    else
    printf("%d th bit not set\n",p);   
    return 0;    
}