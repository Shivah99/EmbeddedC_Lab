#include<stdio.h>
int main()
{
    int a,b;
     int MUL,SUM,SUB,QUO,REM;
    printf("Enter a,b values:\n");
    scanf("%d%d",&a,&b);
    calci(a,b,&MUL,&SUM,&SUB,&QUO,&REM);
    printf("mul = %d\n sum = %d\n sub = %d\nquo = %d\nrem = %d",MUL,SUM,SUB,QUO,REM);
 
}
int calci(int a, int b,int *mul,int *sum,int *sub,int *quo,int *rem)
{
 *mul=a*b;
*sum=a+b;
    *sub=a-b;
    *quo=a/b;
    *rem=a%b;
}