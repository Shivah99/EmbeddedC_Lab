#include <stdio.h>
int main()
{
  int i=1,number,exponent,power=1;
  printf(" Enter any Number : ");
  scanf(" %d", &number);
  printf("\n Enter the Exponent Vlaue: ");
  scanf(" %d", &exponent);
    
 while( i <= exponent)
  {
  	power = power * number;
  	i++;
  }
  
  printf("\n The Final result of %d Power %d = %d", number, exponent, power);
  
  return 0;
}