#include<stdio.h> 
int main()
{
    int r,c,i,j,k;
    printf("Enter the number of Strings and Size of each :\n");
    scanf("%d%d",&r,&c);
     char a[r][c];

     // reading string from user
     printf("Enter %d strings of %d size:\n",r,c);
     for(i=0; i<r; i++)
     scanf("%s[^\n]",a[i]);

     // dispaying strings
     printf("\nEntered names are:\n");
     for(i=0;i<r;i++)
     {
     printf("\n");
     printf("%s",a[i]);
     }
     return 0;
}