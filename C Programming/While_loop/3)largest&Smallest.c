#include<stdio.h>
int main()
{
    int i=1, n, largest,smallest,inputs;
    printf ("Enter total number of inputs n:");
    scanf ("%d", &inputs);
    printf ("Enter first input: ");
    scanf ("%d", &n);
    largest=n;
    smallest=n;
    inputs=inputs-1;
   while( i<=inputs)
    {
        printf ("\n Enter next input: ");
        scanf ("%d",&n);
        if (n>largest)
        largest=n;
        if (n<smallest)
        smallest=n;
        i++;
    }
    printf ("\n The largest number is %d\n", largest);
    printf (" The smallest number is %d\n", smallest);
    return 0;
}