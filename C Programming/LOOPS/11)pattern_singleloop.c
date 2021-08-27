#include <stdio.h>
int main() 
{
   int i,n,j;
   printf("ENter n:");
   scanf("%d",&n);
  
   for ( j=0,i = 1; i <= n; ) 
   {
      if( j < i )
      {
         printf("*");
         j++;
    }
      if(j==i) {
         printf("\n");
         j=0;
         i++;
      }
   }
   return 0;
}