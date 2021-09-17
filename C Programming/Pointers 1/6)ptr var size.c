#include<stdio.h>
int main()
{
    int *i;
    float *f;
    char *c;
    printf("sizes of indirection operators:\n");
    printf("\nint  %d",sizeof(*i));
    printf("\nfloat %d",sizeof(*f));
    printf("\nchar %d\n",sizeof(*c));
    printf("\nsizes of pointer variables:\n");
     printf("\nint  %d",sizeof(i));
    printf("\nfloat %d",sizeof(f));
    printf("\nchar %d",sizeof(c));
    //It's because ptr variable depends memory of the system.
}