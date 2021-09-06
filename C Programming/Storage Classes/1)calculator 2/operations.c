#include<stdio.h>
int a, b;
int add=0, sub=0, mul=0, divi=0;
void Calc(char op)
{
printf("\nEnter the operand a,b values\n");
scanf("%d%d", &a, &b);
switch(op)
{
  case '+':
  add=a+b;
  printf("%d is add",add);
  break;
  case '-':
  sub=a-b;
  printf("%d is sub",sub);
  break;
  case '/':
  divi=a/b;
  printf("%d is div",divi);
  break;
  case '*':
  mul=a*b;
  printf("%d is mul",mul);
  break;
  default:
  printf("ERROR!!Enter valid operation\n");
  break;
}}
