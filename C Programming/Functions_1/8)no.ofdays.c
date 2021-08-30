#include<stdio.h> 
void noofdays(int m, int y);
int main() 
{
    int m,y; 
    printf("Enter month(m) / year(y):");
    scanf("%d/%d",&m,&y);
   noofdays(m,y);
return 0;
}
void noofdays(int m ,int y)
{
    
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
    {
        printf("No.of days in %d month are 31 days",m);
    }
    else if(m==4||m==6||m==9||m==11)
    {
        printf("No.of days in %d month are 30 days",m);
    }
    else if(m==2)
    {
          if (y % 400 == 0||y % 4 == 0) 
          {
        printf("\n%d is the leap year.\n", y);
             printf("No.of days in %d month are 29 days",m);
    } 
        else 
        {
        printf("\n%d is not the leap year.\n", y);
             printf("No.of days in %d month are 28 days",m);
       } 

    }
    else
    {
    	printf("Invalid month %d",m);
}
    return 0;
}