#include<stdio.h>
void mul(int ,int );
void main()
{
    int a,b;
      printf("Enter a value: ");
    scanf("%d",&a);
     printf("Enter b value: ");
    scanf("%d",&b);
    mul(a,b);
    
 
}
void mul(int a,int b)
{ 
    int i;
   
    for(i=1;i<=b;i++)
    printf("\n %d X %d = %d",a,i,a*i);
    return 0;
}