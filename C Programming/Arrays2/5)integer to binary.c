#include<stdio.h>
int main()
{
    int n,i,a[50];
    printf("Enter an integer: ");
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
    }
printf("\nBinary of Given Number is= ");    
for(i=i-1;i>=0;i--)      
printf("%d",a[i]);    
}
