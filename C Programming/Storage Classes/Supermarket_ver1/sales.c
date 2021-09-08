#include"super.h"
extern int s;
int sales()
{
    
sell();
 
}
 int sell()
    {
          
        int items;
        printf("Enter the items to be sold:\n ");
        scanf("%d",&items);
        if(s>items)
        {
            deletestock(items);
            
            return supermarket();
        }
        else
        {
     printf("sorry!! ,Sale is not possible:(\n ");

        }
 return supermarket();   
 }