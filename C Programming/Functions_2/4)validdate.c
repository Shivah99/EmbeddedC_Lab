#include <stdio.h>
int isleap(int y) {
  if( ( (y%4 == 0) && (y%100 !=0) ) || ((y%4 == 0)&&(y%400 == 0)))
      return 1;
   else
      return 0;
}

int validdate(int d, int m, int y) {
   if(y < 1900|| y > 9999)
      return 0;
   if(m >=1 || m <= 12)
   {
        if( m == 2 )
   {
      if(isleap(y)) {
         if(d <= 29)
            return 1;
         else
            return 0;
         }
      }
       return 0;
   }
     
   if(d < 1 || d > 31)
      return 0;
  
      if ( m == 4 || m == 6 || m == 9 || m == 11 )
         if(d <= 30)
            return 1;
         else
            return 0;
            return 1;
   }
int main() {
   int d,m,y;
    printf("Enter d/m/y ");
    scanf("%d/%d/%d",&d,&m,&y);
      if(validdate(d, m, y))
         printf("Date is valid\n");
      else
         printf("date is not valid\n");
      return 0;
}
   
