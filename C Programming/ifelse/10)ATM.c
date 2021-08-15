#include <stdio.h>
int main()
{
int p,q,r,s,t,u,v,w,x,n;
printf("Enter the amount to withdraw in multiples of 10: \t%d",n);
scanf("%d",&n);
p=n/500;
q=n%500;
r=q/100;
s=q%100;
t=s/50;
u=s%50;
v=u/20;
w=u%20;
x=w/10;

if(n%2!=0)
{
printf("Enter valid amount to dispense.\nEnter multiples of 500,100,50,20,10");
}
 if(n>=500)
 {
     printf("no.of 500 denominations=%d\n",p);
     
 }
 if (n>=100 && q!=0)
 {
     printf("no.of 100 denominations=%d\n",r);
     
 }
  if(n>=50 && s!=0)
{
    printf(" no.of 50 denominations=%d\n",t);
    }
  if(n>=20 && u!=0)
 {
     printf("no.of 20 denominations=%d\n",v); 
     
 }
 if(n>=10 && w!=0)
 {
     printf("no.of 10 denominations=%d",x);
     
 }
 else
 {
     printf("amount cannot be dispensed");
     
 }

 return 0;
}