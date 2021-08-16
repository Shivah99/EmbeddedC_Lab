#include<stdio.h> 
int main() 

{
    int var; 
    printf ("Size of int = %d bytes\n", sizeof(short int));
     printf ("Size of long int = %d\n", sizeof(long int));
    printf ("Size of float =%d\n",sizeof (float)); 
    printf ("Size of double =%d\n",sizeof (double));
    printf ("Size of char = %d\n", sizeof (char)); 
    printf ("Size of long double = %d\n", sizeof (long double));
    printf("Size of an integer constant = %d\n",sizeof (45));
return 0;
}