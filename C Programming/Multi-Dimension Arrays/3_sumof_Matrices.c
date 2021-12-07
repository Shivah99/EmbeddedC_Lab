
1
#include<stdio.h>
2
int main()
3
{
4
    int r,c;
5
    int i,j;
6
    printf("Enter r(row) & c(col)");
7
    scanf("%d%d",&r,&c);
8
    int a[r][c],b[r][c],sum[r][c];
9
    printf(" \n\na[%d][%d]\n\n ",r,c); 
10
       for (i=0;i<r;i++)    
11
    {    
12
        for (j=0;j<c;j++)    
13
        {    
14
            printf("Enter a[%d][%d]: ",i,j);                
15
            scanf("%d",&a[i][j]);    
16
        }    
17
    }    
18
    printf("\n printing the elements of matrix a....\n");     
19
    for(i=0;i<r;i++)    
20
    {    
21
        printf("\n");    
22
        for (j=0;j<c;j++)    
23
        {    
24
            printf("%d\t",a[i][j]);    
25
        }    
26
    }
27
       printf(" \n\nb[%d][%d]\n\n ",r,c); 
28
       for (i=0;i<r;i++)    
29
    {    
30
        for (j=0;j<c;j++)    
31
        {    
32
            printf("Enter a[%d][%d]: ",i,j);                
33
            scanf("%d",&b[i][j]);    
34
        }    
35
    }    
36
    printf("\n printing the elements matrix b....\n");     
37
    for(i=0;i<r;i++)    
38
    {    
39
        printf("\n");    
40
        for (j=0;j<c;j++)    
41
        {    
42
            printf("%d\t",b[i][j]);    
43
        }    
44
    }
45
    printf("\n Addition of matrices a and b is....\n");
46
    for (i=0;i<r;i++)    
47
    {   
48
         printf("\n");  
49
        for (j=0;j<c;j++)    
50
        { 
51
           sum[i][j]= a[i][j]+b[i][j];
52
            printf("%d\t",sum[i][j]); 
53
        }
54
    }
55
}  
