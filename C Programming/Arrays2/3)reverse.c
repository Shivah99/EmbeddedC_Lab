
#include<stdio.h>
int main()
{
    int a[10],i,n;
    printf("\nEnter n:");
    scanf("%d",&n);
    printf("\nEnter array1 values:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\n array1 values:");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
        printf("\n Rev array1 values: ");   
    for(i=i-1;i>=0;i--)
    printf("%d ",a[i]);
}