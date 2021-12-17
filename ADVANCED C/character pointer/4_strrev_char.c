#include <stdio.h>
#include <string.h>
  
char* char_reverse(char* str)
{
    int n, i;
    char *p1, *p2, ch;
    n = strlen(str);
    p1 = str;
    p2 = str;
    for (i=0;i<n-1;i++)
        p2++;
    for (i=0;i<n/2;i++) 
    {
        ch = *p2;
        *p2 = *p1;
        *p1 = ch;
        p1++;
        p2--;
    }
}
  
int main()
{
    char str[100];
    printf("Enter a string: \t");
    scanf("%s",str);
    char_reverse(str);
    printf("Reverse of the string: %s", str);
    return 0;
}