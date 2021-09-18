//dt: 13/09/2021
#include<stdio.h>
int main()
{
    int n,i,p;
    printf("Enter array size: ");
    scanf("%d",&n);
    int b[n];
    printf("\nEnter %d array elements: ",n);
    for(i=0;i<n;i++)
    scanf("%d",&b[i]);
     p=sizeof(b)/4;
    myarray(b,n,p);
}
int myarray(int a[],int n,int p)
{
    if(n>1)
{
    int k,i;
    printf("Choose:\n1)To insert element\n2)To delete element\n3)To Quit\n");
    scanf("%d",&k);
  int element,position; 
    if(k==1)
    {
        if(p>=n)
        {
            printf("\nCannot insert. Array is full");
            myarray(a,n,p);
        }
        else
        {
        printf("Enter the position to insert an element\n");
   scanf("%d", &position);
   printf("Enter the element: \n");
   scanf("%d", &element);
   for(i=n-1;i>=position-1;i--)
      a[i+1] = a[i];
   a[position-1] = element;
   printf("Resultant array is\n");
   for (i=0;i<=n;i++)
      printf("%d\n",a[i]);
  myarray(a,n,p);
}    
        }
    if(k==2)
    {
         printf("Enter the position to delete element\n");
   scanf("%d", &position);
   if (position>=n+1)
      printf("Deletion not possible.\n");
   else
   {
      for (i=position-1;i<n-1;i++)
         a[i] = a[i+1];
      printf("Resultant array:\n");
      for(i=0;i<n-1;i++)
         printf("%d\n",a[i]);
   }
myarray(a,n,p);
   return -1;
        
}
    
    if(k==3)
        printf("Thank you!!");
    }
    else
    {
        printf("array size should be more than 1");
    main();
    }
}
