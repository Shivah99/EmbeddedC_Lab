#include<stdio.h>
int main()
{
        char x=5;   
        int i,c;
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
printf("\nno.of 1's are : %d ",c);
printf("\n");   
}
