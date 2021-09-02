#include <stdio.h>
int isleap(int y) {
   if((y % 4 == 0) && (y % 100 != 0) && (y % 400 == 0))
      return 1;
   else
      return 0;
}

int validdate(int d, int m, int y) {
   if(y < 1900|| y > 9999)
      return 0;
   if(m < 1 || m > 12)
      return 0;
   if(d < 1 || d > 31)
      return 0;
   if( m == 2 )
   {
      if(isleap(y)==1&&d==29)
            return 1;
         else if(d<29)
            return 1;
            else if(d>29)
            return 0;
         
      }
      if ( m == 4 || m == 6 || m == 9 || m == 11 )
         if(d <= 30)
            return 1;
         else
            return 0;
            return 1;
   }
   int comparedates(int d1,int m1,int y1,int d2,int m2,int y2)
{
   if(y1<y2)
   return 1;
   else if(y1>y2)
   return 0;
   else if(m1<m2)
   return 1;
   else if(m1>m2)
   return 0;
    else if(d1<d2)
   return 1;
   else if(d1>d2)
   return 0;
   else
   printf("same");
   return -1;
}
int main() {
   int d1,m1,y1,d2,m2,y2;
    printf("\nEnter d1/m1/y1 ");
    scanf("%d/%d/%d",&d1,&m1,&y1);
     printf("\nEnter d2/m2/y2 ");
    scanf("%d/%d/%d",&d2,&m2,&y2);
   
      if(validdate(d1, m1, y1))
        printf("Date is valid\n");
      else
        printf("date is not valid\n");
      if(validdate(d2, m2, y2))
       printf("Date is valid\n");
         else
         printf("date is not valid\n");
     
    if(comparedates(d1,m1,y1,d2,m2,y2))
    printf("date 1 is older\n");
    else
    printf("date 2 is older\n");
    return 0;
}
   
