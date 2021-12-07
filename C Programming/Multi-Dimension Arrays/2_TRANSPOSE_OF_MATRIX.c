
#include<stdio.h>
9
int main()
10
{
11
    int m,n;
12
    int i,j,totalbymen=0,total=0;
13
    printf("Enter no.of sales(m):");
14
    scanf("%d",&m);
15
    printf("Enter no.of items(n):");
16
    scanf("%d",&n);
17
    int sale[m][n];
18
    printf(" a[%d][%d]\n ",m,n);   
19
       for (i=0;i<m;i++)    
20
    {    
21
        for (j=0;j<n;j++)    
22
        {                  
23
            scanf("%d",&sale[i][j]);    
24
        }    
25
    }   
26
    printf("\n****** MATRIX(mxn) **********\n");
27
       for (i=0;i<m;i++)    
28
    {    
29
       printf("\n");
30
        for (j=0;j<n;j++)    
31
        {                  
32
            printf("%d\t",sale[i][j]);    
33
        }    
34
    }  
35
    printf("\n****** TRANSPOSE(nxm) **********\n");
36
           for (i=0;i<n;i++)    
37
    {    
38
       printf("\n");
39
        for (j=0;j<m;j++)    
40
        {                  
41
            printf("%d\t",sale[j][i]);    
42
        }    
43
    }
44
}   
45
​
