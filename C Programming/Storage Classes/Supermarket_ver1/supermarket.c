#include"super.h"
int supermarket()
{
printf("1)To check available stock \n");
printf("2)To purchase new stock \n"); 
printf("3)To sell items \n");
printf("To exit enter any other key\n");
int i;
scanf("%d",&i);
switch(i)
{
case 1:
stock();
break;
case 2:
purchase();
break;
case 3: 
sales();
break;
default:
printf("Thank you! for shopping.\n");
break;
return 0;
}
}