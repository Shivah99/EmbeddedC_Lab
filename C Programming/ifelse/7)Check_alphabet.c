#include <stdio.h>
int main()  
{  
    char ch;  
    
    printf("Input any alphabet : ");  
    scanf("%c", &ch);  
  
 
    if(ch>='a')
    {
        if(ch<='z')
        {
            printf("The character is  an alphabet.\n"); 
        }
    else {
         printf("The character is not  an alphabet.\n");
    }}
        else if (ch>='A') 
        {
            if(ch<='Z')
            {
                 printf("The character is  an alphabet.\n");
            }
    else
    {
         printf("The character is not an alphabet.\n");
    }}
    
    
    else
    {
        printf("The character is not an alphabet.\n");
    }
        return 0;
}