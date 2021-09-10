#include<stdio.h>
int main()
{
    int a[100],b[100],i,n,c[100];
    printf("\nEnter n:");
    scanf("%d",&n);
    printf("\nEnter array1 values:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
     printf("\nEnter array2 values:\n");
    for(i=0;i<n;i++)
    scanf("%d",&b[i]);
    printf("\n a[%d] values: ",n);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
     printf("\n b[%d] values: ",n);
    for(i=0;i<n;i++)
        printf("%d ",b[i]);
        printf("\n  ");   
     for(i=0;i<n;i++)
     {
         c[i]=a[i];
         a[i]=b[i];
         b[i]=c[i];
         
     }
    printf("\na[%d]= ",n);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
     printf("\nb[%d]= ",n);
    for(i=0;i<n;i++)
        printf("%d ",b[i]);
         
}

