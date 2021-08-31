#include <stdio.h>
int count(int n,int c);
int main() {
   
    int n,c=0;
    printf("Enter the Number: ");
    scanf("%d", &n);
    c=count(n,c);
    printf("Number of digits: %d", c);
    return 0;
}
int count(int n,int c)
{
    if(n==0)
        return 1;
   
    do
    {
    n = n/10;
    c++;
    }
    while(n!=0);
    
return c;
    
}
