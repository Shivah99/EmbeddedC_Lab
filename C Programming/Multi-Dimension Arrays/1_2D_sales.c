#include<stdio.h>
int main()
{
    int s,m;                    //s= sales, m= salesmen
    int i,j,total=0;
    printf("Enter no.of sales(s),no.of salesmen(m)");
    scanf("%d%d",&s,&m);
    int sale[s][m];
    printf(" a[%d][%d]\n ",s,m); 
  //  ****************sxm matrix****************
 
       for (i=0;i<s;i++)    
    {    
        for (j=0;j<m;j++)    
        {    
            printf("sales by salesman %d of item %d is : ",i+1,j+1);                
            scanf("%d",&sale[i][j]);    
        }    
    }    
    printf(" \n");
    printf("\n ********printing the elements Matrix Form ********\n");  
   for (i=0;i<s;i++)    
    {    printf(" \n");
        for (j=0;j<m;j++)    
        {    
            printf("%d\t",sale[i][j]);  
        }    
    }
    printf("\n\n********  a ) Total sales by each sales man******** \n ");
    for(i=0;i<s;i++)    
    {    printf("\nsales by salesman-%d",i+1);
        printf("\n"); 
     int total1=0;
        for (j=0;j<m;j++)    
        {    
            printf("item:%d of %d\t",j+1,sale[i][j]);  
            total1 += sale[i][j];
        }   
     total += total1;
     printf("Total:%d \n",total1);
    }
     printf("\n ********c ) Total sales******** \n ");
       printf("\nTotal sales:%d ",total);  
}   
