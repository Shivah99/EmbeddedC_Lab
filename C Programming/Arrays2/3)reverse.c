#include<stdio.h>
int main()
{
    int a[10],b[10],i,n;
    printf("\nEnter n:");
    scanf("%d",&n);
    printf("\nEnter array1 values:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\n array1 values:");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
       
    for(i=0;i<n;i++)
        b[i]=a[n-i-1];
      printf("\n array2 values: ");
      for(i=0;i<n;i++) 
        printf("%d ",b[i]);
  
}