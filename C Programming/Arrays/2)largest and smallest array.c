#include <stdio.h>
int main()
    {
    int a[10], i, largest, smallest;
    for(i = 0; i < 10; i++)
    {
    printf(" \na[%d]= ",i);
    scanf("%d", &a[i]);
    }
    largest = a[0];
    for(i = 1; i < 10; i++)
    {
        if(largest < a[i]) 
        {
    largest = a[i]; }
    }
    printf("\nThe largest element is: %d",largest);

    smallest = a[0];  
    for(i = 1; i < 10; i++) 
    {
        if(smallest>a[i])
        {
            smallest = a[i]; 
        }
    }
    printf("\nThe smallest element is: %d", smallest);
    return 0;
    }