#include<stdio.h>
int main()
{
    int a,b,d;
    char op;
printf("Choose the operand(+,-,/,*): ");
scanf("%c",&op);
printf("\nEnter the numbers:");
scanf("%d%d",&a,&b);
switch(op)
{
  case '+':
  d=a+b;
  printf("%d is a Vowel",d);
  break;
  case '-':
  d=a-b;
  printf("%d is a Vowel",d);
  break;
  case '/':
  d=a/b;
  printf("%d is a Vowel",d);
  break;
  case '*':
  d=a*b;
  printf("%d is a Vowel",d);
  break;
  default:
  printf("ERROR!!");
  break;
}
    return 0;
}
