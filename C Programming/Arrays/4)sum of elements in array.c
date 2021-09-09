#include<stdio.h>
#define SIZE 10
int main()
{
 int n, i, a[n], sum=0;
 printf("\nEnter the Size of the Array: ");
 scanf("%d", &n);
 printf("\nEnter ELements of Array\n");
 for(i = 0; i <n; i++)
  {
    scanf("%d",&a[i]);
  }
 for(i=0;i<n;i++)
 {
    sum=sum+a[i]; 
 }
 printf("Sum = %d ",sum);
 return 0;
}

