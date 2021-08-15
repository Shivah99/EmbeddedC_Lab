#include<stdio.h>
int main()
{
int units;
float nbill=100;
printf("Enter the no.of units:");
scanf("%d",&units);
if(units<=200)
{
    printf("The net minimum bill to be paid: %.2f\n ",nbill);
}
  else if(units<=400) 
{
    printf("The net  bill to be paid: %0.2f\n ",nbill=100+(units-200)*0.65);
}
 else if(units<=600) 
{
    printf("The net  bill to be paid: %0.2f\n ",nbill=230+(units-400)*0.8);
}
 else if(units>600) 
{
    printf("The net  bill to be paid: %0.2f\n ",nbill=390+(units-400)*1);
}

else
{
    printf("Enter valid units :(");
}
    return 0;
    
    
}
  