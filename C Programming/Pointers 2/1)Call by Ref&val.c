#include<stdio.h>
void refswap (int *a, int *b);
void valswap(int x, int y);
int main ( )
 {
  int a = 25;
  int b = 100;
  printf("a = %d, b = %d\n", a, b);
    valswap(a,b);
    printf("//Call by VALUE in main()--> a = %d, b = %d\n", a, b);
  refswap(&a, &b);
  printf("//Call by REFERENCE --> a = %d, b = %d\n", a, b);
    
    
  return 0;
}
void valswap(int x, int y)
{
int t;
    t=x;
    x=y;
    y=t;
    printf("//Call by VALUE in swap()--> a = %d, b = %d\n", x, y);
}
void refswap (int *a, int *b) 
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
