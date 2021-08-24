#include<stdio.h>
int main()
{
int i,j,n;
printf ("Enter n ");
scanf("%d",&n);
for(i=1;i<=n;)
{
for(j=1;j<=i;)
{
printf("* ");
j++;

}

i++;
 printf("\n");
}
   
while(i<=n)
{
while(j<=i)
{
printf("* ");
j++;

}

i++;
 printf("\n");
}
 
}

