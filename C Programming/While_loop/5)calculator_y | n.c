#include<stdio.h>
int main()
{
int a,b,d;
char ch,op;
printf("To continue enter y: ");
scanf("%c",&ch);
while(ch)
{
    if(ch=='y' || ch=='Y')
    {
printf ("Enter the first number:");
scanf ("%d",&a);
printf ("Enter the second number:");
scanf ("%d",&b);
printf("Choose the operand(+,-,/,): ");
scanf(" %c", &op);
switch(op)
{
case '+':
d=a+b;
printf("\n%d is a Sum",d);
break;
case '-':
d=a-b;
printf("\n%d is a Sub",d);
break;
case '/':
d=a/b;
printf("%d is a div",d);
break;
case '*':
d=a*b;
printf("\n%d is a Mul",d);
break;
}
printf ("\n\nDo you want to repeat the operation Y/N: ");
scanf (" %c", &ch);
}
else
{
return 0;
}
}

}