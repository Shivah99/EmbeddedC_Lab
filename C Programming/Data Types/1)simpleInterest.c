#include<stdio.h>
void main()
{
int p,n,m;
float r,si;
printf("Enter Principle,time in months and rate of Interest\n");
scanf("%d%d%f",&p,&n,&r);
m=n/12.0;
si=p*m*r/100;
printf("Simple Interest = %f\n",si);
}
