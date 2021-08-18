#include<stdio.h> 
int main()
{ 
    char a,b,c; 
    printf("enter three characters\t"); 
    scanf("%c%c%c",&a,&b,&c);
    int d; 
    d=a-48; 
    d=(d*10)+b-48; 
    d=(d*10)+c-48; 
    printf("%d",d); 
    return 0; 
}