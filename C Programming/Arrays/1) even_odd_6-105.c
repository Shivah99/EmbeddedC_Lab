#include<stdio.h>
int main()
{
int a[100],n,i;  
    printf("\n\n Print all the numbers in range.  \n\n");
    for(i=0;i<100;i++) 
    {
        a[i]=i+1;
printf("a[%d]= %d\n",i,a[i]);
    }printf("\n\n Print all even elements.  \n\n");
      for(i=0;i<100;i++) 
      {
if(a[i]%2==0)
{
     a[i]=i+1;
  printf("a[%d]= %d\n",i,a[i]);
}}printf("\n\n  Print all odd elements. \n\n");
           for(i=0;i<100;i++) 
      {
      if(a[i]%2!=0)
{
     a[i]=i+1;
          printf("a[%d]=%d\n",i,a[i]);
      }
}
    printf("\n\n  Add 5 to each element and print 6 – 105 numbers. \n\n");
 for(i=1;i<=100;i++) 
    {
        a[i]=i+5;
printf("a[%d]= %d\n",i,a[i]);
    }}