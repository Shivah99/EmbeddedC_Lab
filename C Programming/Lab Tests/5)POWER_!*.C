#include <stdio.h>
int main()
{

  int power,inc,i, j,num,expo;
  printf("Enter number: "); 
  scanf("%d",&num);
  printf("exponent value: ");
   scanf("%d",&expo);
  power = num;
    inc=num;
    if(expo==0)
    {
       printf("1");
        return 1;
    }
  for(i = 1; i <expo; i++)
  {
     for(j = 1; j < num; j++)
     {
        power += inc;
        
     }
    inc=power;
      
  }
    printf("Power=%d",power);
return 0;   
}
 
