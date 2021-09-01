#include <stdio.h>
int main()
{
    int n = 5;
    printf("%d", series(n));
    return 0;
}
int series(int n)
{
    int sum = 0, j = 1;
    for (int i = 1; i <= n; i++) {
        sum = sum + j;
        j = (j * 10) + 1;
    }
    return sum;
}
