#include"super.h"
extern int s;
int purchase()
{
    
    int items;
     printf("\nEnter the items to be purchased: ");
    scanf("%d",&items);
	if(s>0)
    addstock(items);
    else if(items>500)
    {
    printf("purchase not required or not possible\n");
    }
    return supermarket();
}