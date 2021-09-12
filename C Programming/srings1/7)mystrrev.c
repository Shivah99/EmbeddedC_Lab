#include <stdio.h>
int main()
{
    int i,c;
    char a[100];
    printf("\nString before rev:");
    scanf("%[^\n]99s",a);
    c=mystrlen(a);
    for(i=c-1;i>=0;i--)
    printf("%c",a[i] );
}
int mystrlen(char a[])
{
    int i;
    for (i=0;a[i]!='\0';i++);
    printf("\n");
    return i;
}