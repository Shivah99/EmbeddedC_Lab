#include<stdio.h>
int main()
{
int n,r,m1, m2, m3, T=0, t, R=0; 
int i=1,c=0;
printf("\nEnter no.of Students:");
scanf("%d",&n);
while(i<=n)
{ 
printf("\nEnter roll number:");
scanf("%d",&r);
if(r<1000||r>9999)
{
printf("\nEnter valid roll number(1000-9999)\n");
continue;
}   
    printf(" Enter the 3 subject marks:");
    scanf("%d%d%d",&m1,&m2,&m3);
    t=total(m1,m2,m3);
    if(T<t)
        T=t;
    i++;
}
    if(T)
printf("\nRoll number of topper:%d\t\n  Total marks: %d\n",r,T);
else
printf("\nNo one made above 200");
}

int total(int m1, int m2, int m3)
{
if(m1 <40 ||m2<40||m3<40)
return -1;
int s = m1+m2+m3;
if(s >=200)
return s; 
else
return -1;
}
