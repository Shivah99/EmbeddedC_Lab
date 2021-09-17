#include<stdio.h>
int main()
{
    char a,b;
    printf("Enter a,b values: ");
    char *c=&a,*d=&b;
    scanf(" %c %c",c,d);
    if((a>64 &&a<123) && (b>64 && b<123))
    {
        if(a>b)
            printf("%c(%d) of %c(%d) is greater ascii value:",a,a,b,b);
        else
        printf("%c(%d) of %c(%d) is greater ascii value:",b,b,a,a);
    }       
}