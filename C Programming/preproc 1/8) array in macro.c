#include<stdio.h>
#define n 10
#define ARRAY(array, n) \
printf("Enter array Elements"); \
for(int i = 0; i < n; i++) \
    scanf("%d", &array[i]);\
for(int i = 0; i < n; i++) \
    printf("%d ", array[i]);
int main(void) 
{
    int array[n];
    ARRAY(array, n);
    return 0;
}