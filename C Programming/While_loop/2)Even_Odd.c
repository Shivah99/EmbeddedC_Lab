#include<stdio.h>
int main()
{
int m, n,i; 
printf("Enter the first number for the range: "); 
scanf("%d",&m); 
printf("Enter the second number for the range: ");
scanf("%d", &n);
printf("\nDisplay even number between %d and %d are:", m, n); 
i=m;
while(i<=n)
{
  
   
    if(i%2==0)
    printf("\n%d", i);
    i++;
    } 
    printf("\n\nDisplay odd number between %d and %d are:", m, n); 
   i=m;
while(i<=n) 
    {
         
        if(i%2 != 0) 
        printf("\n%d", i); 
        i++;
    }
    return 0;
}