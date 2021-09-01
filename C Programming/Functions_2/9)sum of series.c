#include <stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    series(n);
   
    return 0;
}
int series(int n)
{
    int sum = 0, j = 0;
    for (int i = 1; i <= n; i++) {
        sum = sum + j;
        j = (j * 10) + 1;
         printf("%d+", j);
    }
    return 0;
}
