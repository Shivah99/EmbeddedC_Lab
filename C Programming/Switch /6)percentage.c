#include<stdio.h>
int main()
{
    int p;
    printf("Enter percentage (0-100) ");
    scanf("%d",&p);
    p=p/10;
    switch(p)
    {
        case 10:
        case 9:
        case 8:
        printf("Honours\n");
        break;
        case 7:
        case 6:
        printf("First division\n");
        break;
        case 5:
        printf("Second division\n");
        break;
        case 4:
        printf("Third division\n");
        break;
        default:
        printf("Fail");
        return 0;
    }
}