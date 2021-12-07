#include<stdio.h>
int main()
{
    int m,n;
    int i,j,totalbymen=0,total=0;
    printf("Enter no.of sales(m):");
    scanf("%d",&m);
    printf("Enter no.of items(n):");
    scanf("%d",&n);
    int sale[m][n];
    printf(" a[%d][%d]\n ",m,n);   
       for (i=0;i<m;i++)    
    {    
        for (j=0;j<n;j++)    
        {                  
            scanf("%d",&sale[i][j]);    
        }    
    }   
    printf("\n****** MATRIX(mxn) **********\n");
       for (i=0;i<m;i++)    
    {    
       printf("\n");
        for (j=0;j<n;j++)    
        {                  
            printf("%d\t",sale[i][j]);    
        }    
    }  
    printf("\n****** TRANSPOSE(nxm) **********\n");
           for (i=0;i<n;i++)    
    {    
       printf("\n");
        for (j=0;j<m;j++)    
        {                  
            printf("%d\t",sale[j][i]);    
        }    
    }
}   

