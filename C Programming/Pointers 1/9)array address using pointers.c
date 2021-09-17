#include<stdio.h>
int main()
{
    int a[10],i;
    printf("enter array elements:\n");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    printf("size of array= %d \n",sizeof(a));
    int *p;
    p=a;
    printf("\naddress of elements:\n");
    for(i=0;i<10;i++)
        printf("&a[%d]  =  %u\n",i,p+i);
    printf("array elements: \n");
    for(i=0;i<10;i++)
        printf("a[%d] = %d\n",i,*(p+i));
   
}