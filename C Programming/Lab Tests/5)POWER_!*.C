#include <stdio.h>
int main()
{

  int power,i, j,num,expo;
  printf("Enter number: "); 
  scanf("%d",&num);
  printf("exponent value: ");
   scanf("%d",&expo);
  power = num;
  for(i = 1; i < expo; i++)
  {
     for(j = 1; j < num; )
     {
        power += num;
        j++;
     }
    
  }
  switch(expo)
  {
      case 0:
      printf("1");
      break;
  default:
  printf("\n %d", power);
  return 0;
}
    
}
 