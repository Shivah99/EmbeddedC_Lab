#include<stdio.h>     
int leap(int year); 
int main()  
{  
    int year;  
    printf("Enter a year: ");  
    scanf("%d", &year);   
    if(leap(year))  
    {  
        printf("%d is leap year\n", year); 
        return 1;
    }  
    else  
    {  
        printf("%d is not leap year\n", year);  
        return 0;
    }  
    return 0;  
}  
 
int leap(int year)  
{  
  
   if(((year % 4 == 0)  && (year % 400 == 0))||((year % 4 == 0)&& (year % 100 != 0)))
        return 1;
        else  
        return 0;  
} 
