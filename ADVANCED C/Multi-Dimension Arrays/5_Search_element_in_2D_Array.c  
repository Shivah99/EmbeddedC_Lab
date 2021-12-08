#include<stdio.h>
int main()
{
    int s,m,n; 
    int i,j,total=0;
    printf("Enter no.of rows(s),no.of colounms(m)");
    scanf("%d%d",&s,&m);
    printf("Enter the Element to search:");
    scanf("%d",&n);
    int a[s][m];
    printf(" a[%d][%d]\n ",s,m); 
       for (i=0;i<s;i++)    
    {    
        for (j=0;j<m;j++)    
        {    
            printf("a[%d][%d]:",i,j);                
            scanf("%d",&a[i][j]);    
        }    
    }    
    printf("\n***********matrix form**********\n");
         for (i=0;i<s;i++)    
    {   
         printf("\n");
        for (j=0;j<m;j++)    
        {    
            printf("%d\t",a[i][j]);                
               
        }    
    } 
 printf("\n***********ELEMENT POSITION**********\n");
         for (i=0;i<s;i++)    
    {   
         printf("\n");
        for (j=0;j<m;j++)    
        {   
            if(n==a[i][j])
            printf("\nROW:%d\nCOLUMN:%d \na[%d][%d]=%d\n",i,j,i,j,n);                  
        }    
    }  
}   
