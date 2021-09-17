#include<stdio.h>
int main()
{
int x,y,z,k;
int *a,*b,*c;
    a=&x;b=&y;c=&z;
    printf("Enter x,y,z values: \n");
    scanf("%d%d%d",a,b,c);
    printf("Before Rotation : x is %d, y is %d,z  is %d\n", *a, *b, *c);
    k = *a;
    *a = *b;
    *b = *c;
    *c =  k;
    printf("After  Rotation: x is %d, y is %d,z  is %d\n", *a, *b, *c);
  return 0;
}