#include<stdio.h>
int main()
{
int x,y,z,k;
    printf("Enter x,y,z values: \n");
    scanf("%d%d%d",&x,&y,&z);
    printf("Before Rotation : x is %d, y is %d,z  is %d\n",x,y,z);
    rotate(&x,&y,&z);
    printf("After  Rotation: x is %d, y is %d,z  is %d\n", x,y,z);
  return 0;
}
int rotate(int *a, int *b, int* c)
{
    int k;
    k = *a;
    *a = *b;
    *b = *c;
    *c =  k;   
}