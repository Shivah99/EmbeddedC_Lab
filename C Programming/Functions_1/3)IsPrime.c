#include<stdio.h>
int IsPrime(int num);
void main()
{
int num, result;
printf("Enter a number: ");
scanf("%d", &num);
result = IsPrime(num);
if(result=1)
printf("The given number is prime.\n");
else
printf("The given number is not prime. \n");

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