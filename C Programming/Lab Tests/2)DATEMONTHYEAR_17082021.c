#include <stdio.h>

int main()
{
    int day,month,year;
    printf("Enter the Day-Month-year:");
    scanf("%d%d%d",&day,&month,&year);
    if(year>=1900 && year<=2200)
    {
        if(month>=1 && month<=12)
        {
            if((day>=1 && day<=31) && (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12))
            {
             printf("Valid Date");  
            }
            else if((day>=1 && day<=31) && (month==4 || month==6 || month==9 || month==11))
            {
                printf("Valid Date");
            }
            else if(((day>=1 && day<=28) || (day>=1 && day<=29)) && month==2)
            {
              printf("Valid Date");  
            }
            else
            {
                printf("Invalid Date");
            }}
             else
            {
                printf("Invalid Date");
            }}
             else
            {
                printf("Invalid Date");
            }
    
    
    
    return 0;
}
