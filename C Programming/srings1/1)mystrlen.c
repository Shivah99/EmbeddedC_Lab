#include <stdio.h>
int main() {
    char a[100];
    scanf("%s",a);
    printf("\nLength of the string: %d",   mystrlen(a) );
}
int mystrlen(char a[])
{
    int i;
    for (i=0;a[i]!='\0';i++);
    printf("\n");
    return i;
}
