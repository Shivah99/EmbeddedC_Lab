//Take an integer as input and print its magnitude (remove sign).
#include<stdio.h>
int main()

{
    int a,b;
    scanf("%d",&a);
b=a>0?a:-a;
    printf("Magnitude: %d",b);
        return 0;
    
}


