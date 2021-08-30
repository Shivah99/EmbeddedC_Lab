#include<stdio.h>

int IsPrime(int num);
void main()
{
int num, res;
printf("Enter a number: ");
scanf("%d", &num);
res= IsPrime(num);
if(res==1)
printf("%d is prime.\n",num);
else
printf("%d is not prime. \n",num);

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