#include<stdio.h>
int main()
{
    int num,d;
     
    printf("Enter a positive integer number: ");
    scanf("%d",&num);
     d=num%2;
     
    switch(d)
    {
        case 0:
            printf("%d is an EVEN number.\n",num);
            break;
        default:
            printf("%d is an ODD number.\n",num);
            break;
    }
     
    return 0;
}
