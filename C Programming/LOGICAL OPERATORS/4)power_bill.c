#include<stdio.h>
int main()
{
int units;
float amount;
printf("Enter no.of units used:");
scanf("%d",&units);
if(units>=0 && units<=200)
printf("The amount to be paid=100/-");
else if(units>200 && units<=400)
printf("\nThe amount to be paid= %.2f /-",amount=100+(units-200)*0.65);
else if(units>400 && units<=600)
printf("\nThe amount to be paid= %.2f /-",amount=230+(units-400)*0.8);
else if(units>600)
printf("\nThe amount to be paid= %.2f /-",amount=390+(units-600)*1);
else
printf("wrong entry!! Re-enter");
    
 return 0;
}