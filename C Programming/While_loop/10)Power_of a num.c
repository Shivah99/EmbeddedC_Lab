#include <stdio.h>
int main()
{
  int i=1,n,exponent,power=1;
  printf(" Enter any Number : ");
  scanf(" %d", &n);
  printf("\n Enter the Exponent Vlaue: ");
  scanf(" %d", &exponent);
    
 while( i <= exponent)
  {
  	power = power * n;
  	i++;
  }
  
  printf("\n  %d to the Power %d = %d", n, exponent, power);
  
  return 0;
}