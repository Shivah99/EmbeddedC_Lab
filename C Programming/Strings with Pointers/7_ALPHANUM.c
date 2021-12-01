#include<stdio.h>

int alphanum(char s[]);

int main()
{
    int i;
    char s[100];

    printf("Enter string1: ");
    scanf("%s",s); 
    i=alphanum(s);
    if(i==0)
    printf("AlphaNumeric");
    else if(i>0)
    printf("Numeric");
    else if(i<0)
    printf("Alpha");
    return 0;
}
int alphanum(char s[])
{
    int i;
    char b=0,c=0;
for(i=0;s[i]!='\0';i++)
{
    if((s[i]>=65 && s[i]<=122))
       c++;
       
       else if((s[i]>=48 && s[i]<=57))
       b++;
    
}
      if(b==0 && c!=0)
         return -1;
     else if(b!=0 && c==0)
          return 1;
     else if( b!=0 && c!=0)
         return 0;

}