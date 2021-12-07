#include<stdio.h>
int main()
{
    int r,c;
    int i,j;
    printf("Enter r(row) & c(col)");
    scanf("%d%d",&r,&c);
    int a[r][c],b[r][c],sum[r][c];
    printf(" \n\na[%d][%d]\n\n ",r,c); 
       for (i=0;i<r;i++)    
    {    
        for (j=0;j<c;j++)    
        {    
            printf("Enter a[%d][%d]: ",i,j);                
            scanf("%d",&a[i][j]);    
        }    
    }    
    printf("\n printing the elements of matrix a....\n");     
    for(i=0;i<r;i++)    
    {    
        printf("\n");    
        for (j=0;j<c;j++)    
        {    
            printf("%d\t",a[i][j]);    
        }    
    }
       printf(" \n\nb[%d][%d]\n\n ",r,c); 
       for (i=0;i<r;i++)    
    {    
        for (j=0;j<c;j++)    
        {    
            printf("Enter a[%d][%d]: ",i,j);                
            scanf("%d",&b[i][j]);    
        }    
    }    
    printf("\n printing the elements matrix b....\n");     
    for(i=0;i<r;i++)    
    {    
        printf("\n");    
        for (j=0;j<c;j++)    
        {    
            printf("%d\t",b[i][j]);    
        }    
    }
    printf("\n Addition of matrices a and b is....\n");
    for (i=0;i<r;i++)    
    {   
         printf("\n");  
        for (j=0;j<c;j++)    
        { 
           sum[i][j]= a[i][j]+b[i][j];
            printf("%d\t",sum[i][j]); 
        }
    }
}  