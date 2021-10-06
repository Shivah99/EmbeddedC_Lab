#include<stdio.h>
#define SET(x,p) (x|(0x1<<p))
#define CLEAR(x,p) (x&(~(0x1<<p)))
#define TOGGLE(x,p) (x^(0x1<<p))
int main()
{
    int x,p,i;
    printf("Enter x_bit: ");
    scanf("%d",&x);
    printf("\nEnter position: ");
    scanf("%d",&p);
    printf("\nSET_BIT=%x",SET(x,p));
    printf("\nCLEAR_BIT=%x",CLEAR(x,p));
    printf("\nTOGGLE_BIT=%x",TOGGLE(x,p));   
printf("\n");
}
