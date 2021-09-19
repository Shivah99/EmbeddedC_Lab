#include<stdio.h>
#define ADD(x,y) printf("sum=%.2f\n",x+y);
#define SUB(x,y) printf("sub=%.2f\n",x-y);
#define MUL(x,y) printf("mul=%.2f\n",x*y);
#define DIV(x,y) printf("div=%.2f\n",x/y);
int main()
{
    char ch;
    do
    {
    float x,y;
    printf("Enter x,y Values: \n");
    scanf("%f%f",&x,&y);
    ADD(x,y)
    SUB(x,y)
    MUL(x,y)
    DIV(x,y)
     printf("Enter Y to continue or press any key");
    scanf(" %c", &ch);   
    }
   
    while(ch=='y'||ch=='Y');
    
    return 0;
}