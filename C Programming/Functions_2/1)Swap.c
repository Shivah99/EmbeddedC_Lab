#include<stdio.h>
int swap(int x,int y);
void main()
{
int a,b;
    printf("Enter a value: ");
    scanf("%d",&a);
     printf("Enter b value: ");
    scanf("%d",&b);
    swap(a,b);
    

}
int swap(int x,int y)
{
    int c;
    c=x;
    x=y;
    y=c;
   
    printf("a=%d\nb=%d",x,y);
    return 0;
    
}