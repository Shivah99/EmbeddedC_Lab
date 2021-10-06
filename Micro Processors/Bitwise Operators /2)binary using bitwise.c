#include<stdio.h>
int main()
{
        char x=5;
        int i=0;
printf("binary of %c is: ",x);

for(;i<8;i++)
{
        if(x&0x80)
                printf("1");
        else
                printf("0");
x=x<<1;
}
printf("\n");
}
