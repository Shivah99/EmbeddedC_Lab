#include <stdio.h>
void prodArray(int a[], int n)
{
    int p[n],prod=1,i;
    
    for(i=0;i<n;i++)
    {
        prod=prod*a[i];
    }
    for(i=0;i<n;i++)
    {
        p[i]=prod/a[i];
    }
    for(i=0;i<n;i++)
    {
        printf(" %d",p[i]);
    }
}
int main() 
{
int n,i;
printf("Enter size:");
scanf("%d",&n);
int a[n];
printf("ENter array elements:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
prodArray(a,n);
return 0;
}