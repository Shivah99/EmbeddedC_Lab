#include<stdio.h>
int main()
{
    int n,i,a[50],p;
    printf("Enter an integer: ");
    scanf("%d",&n);
    p=n;
    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
    }
printf("\nBinary of %d is= ",p);    
for(i=i-1;i>=0;i--)      
printf("%d",a[i]);    
}