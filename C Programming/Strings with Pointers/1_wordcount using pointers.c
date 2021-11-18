#include <stdio.h>
#include <string.h>
 char wordcount(char *s);
void main()
{
    char s[200];
    
 
    printf("Enter the string:\n");
    scanf("%[^\n]s", s);
    
     printf("Number of words in given string are: %d\n", wordcount(s));
    
        
    }
char wordcount(char *s)
{
    int count = 0, i;
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ' && s[i+1]!='.')
            count++;   
        else if(s[i] == '.')
             count++;
        else if(s[i] == ',')
             count++;
        else if(s[i] == '!')
             count++;
        else if(s[i] == '?')
             count++;
    }
    if(i>0)
        count++;
    return count;
   
}