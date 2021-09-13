#include<stdio.h>
int main()
{
  int i,j,n,k=0;
  printf("Enter array size: ");
  scanf("%d",&n);
  int a[n],b[n];
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("\nArray Before Removing Duplicates: ");
  for (i=0;i<n;i++)
    printf("%d ",a[i]);
  for (i=0;i<n;i++)
  {
    for(j=0;j<k;j++)
    {
      if (a[i]==b[j])
        break;
    }
    if (j==k)
    {
      b[k]=a[i];
      k++;
    }
  }
  printf("\nArray After  Removing Duplicates: ");
  for(i=0;i<k;i++)
    printf("%d ",b[i]);
  return 0;
}
