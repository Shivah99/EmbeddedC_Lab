#include<stdio.h>

 main()

{

    int x,y;

   printf("Enter x:");

   scanf("%x",&x);

     printf("Enter y:");

     scanf("%d",&y);

    x=x^y;

     y=x^y;

     x=x^y;

     printf("x=%x\ny=%x",x,y); 

}