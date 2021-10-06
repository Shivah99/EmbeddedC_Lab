#include<stdio.h>
 main()
{
    int x;
   printf("Enter hex num:");
     scanf("%x",&x);
   
    x=(x<<24)| (x<<8 & 0x00FF0000) | (x>>8 & 0x0000FF00) | (x>>24) ;
    printf("%x",x);
    return 0;
}
