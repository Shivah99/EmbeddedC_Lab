#include"super.h"
int s=500;
int stock()
{
 printf("Available stock= %d\n",s);
 return supermarket();  
}
int addstock(int n)
{
    s=s+n; 
    printf("Purchase of %d items  Successful\n",n);
}
 int deletestock(int n)
 {
  s=s-n;
      printf("%d Items sold Successfully \n",n);
     return s;
 }
