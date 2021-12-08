#include<stdio.h> 
int main()
{
    int r,c,i,j,k;
    printf("Enter the number of Strings and Size of each :\n");
    scanf("%d%d",&r,&c);
     char a[r][c];
     printf("Enter %d strings of %d size:\n",r,c);
     for(i=0; i<r; i++)
     scanf("%s[^\n]",a[i]);
     printf("\nEntered Strings are:\n");
     for(i=0;i<r;i++)
     printf("%s\t",a[i]);
     return 0;
}