#include<stdio.h>
int isPrime(int num);
void printallprimes(int m, int n);
int main()
{
    int m,n;
    printf("Enter the lowerlimit of the range: ");
    scanf("%d", &m);
     printf("Enter the upperlimit of the range: ");
    scanf("%d", &n);
    printallprimes(m,n);
    return 0;
}

void printallprimes(int m, int n)
{
    printf("All prime number between %d to %d are: ",m,n);
    
    while(m<=n)
    {
        if(IsPrime(m))
        {
            printf("\n%d",m);
        }
        
      m++;
    }
}

int IsPrime(int num)
{
int i=1,c=0;
while(i<=num)
{
if(num%i==0)
c++;
i++;
}
if(c==2)
return 1;
else
return 0;
}
