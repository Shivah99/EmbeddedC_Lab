#include<stdio.h> 
int main()
{
    int r,c,i,j,k;
    printf("Enter the number of rows and columns:\n");
    scanf("%d%d",&r,&c);
    int a[r][c], b[r][c], mul[r][c];
    printf("\n************** matrix-a **************\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n************** matrix-b **************\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }  
  printf("\n************** Matrix Multiplication**************\n");
  for(i = 0; i < r; i++)
  {
    for(j = 0; j < c; j++)
    {
      mul[i][j]=0;
      for(k = 0; k < c; k++)
      {
        mul[i][j] += a[i][k] * b[k][j];
      }
    }
  }
  for(i = 0; i < r; i++)
  {
    printf("\n");
    for(j = 0; j < c; j++) 
    {
      printf("%d\t",mul[i][j]);
    }
  }
}