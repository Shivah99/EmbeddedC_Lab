#include<stdio.h>
int main()
{
        int x; 
    printf("Enter x: ");
    scanf("%d",&x);
        int i,c,a;
    a=x;
printf("Binary=");
for(i=0,c=0;i<8;i++)
{
        if(x&0x80)
        {           
            printf("1");
            c++;
}
    else
    printf("0");              
    x=x<<1;
}
    if(c==1)
printf("\n%d is power of 2",a);
    else
        printf("\n%d is not power of 2",a);
printf("\n");   
}