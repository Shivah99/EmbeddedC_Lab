#include<stdio.h>
int main()
{
float a,b,c;
char op;
printf("Enter the operand to calculate:");
scanf("%c",&op);

printf("Enter the integers a,b to calculate:");
scanf("%f%f",&a,&b);

if(op=='+')
{
    c=a+b;
    printf("the add of a,b=%.2ff",c);
}
        else if(op=='-')
        {
         c=a-b;
        printf("the sub of a,b=%.2f",c);
        }
       else if(op=='*')
        {
         c=a*b;
        printf("the mul of a,b=%.2f",c);
            }
        else if(op=='/')
        {
            c=a/b;
        printf("the div of a,b=%.2f",c);
            }
else 
{
    printf("ENter a valid operand");
}

    return 0;
}
    
    