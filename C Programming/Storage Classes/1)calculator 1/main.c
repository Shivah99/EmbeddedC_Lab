#include <stdio.h>
#include"operations.c"
int main()
{
char op;
    int num1, num2, result;
    printf("num1 and num2 : ");
        scanf("%d%d",&num1,&num2);
        printf("Operation: ");
    scanf(" %c", &op);
   if(op=='+' || op=='-' || op=='*' || op=='/')
   {
    switch(op)
    {
        case '+': 
            result = add(num1, num2);
            break;
        case '-': 
            result = sub(num1, num2);
            break;
        case '*': 
            result = mult(num1, num2);
            break;
        case '/': 
            result = div(num1, num2);
            break;
        default:
            printf("Invalid operation");
    }
   printf("%d %c %d = %d", num1, op, num2, result);
    return 0;
}}

