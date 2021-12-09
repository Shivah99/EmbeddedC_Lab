#include<stdio.h>
#include<string.h>
char replace(char *s,char c1,char c2)
{
	int i=0;
   for(i=0;s[i];i++)
	{  
		if(s[i]==c1)
		{
		   s[i]=c2;
	    }
   }
   return s;
}
int main()
{
    char s[50],c1,c2;  
    printf("Enter  the string : ");
    scanf("%s",s);
	printf("Enter a character to replace: ");
    scanf(" %c", &c1);
    printf("\nEnter character to replace  with  %c : ",c1);
    scanf(" %c", &c2);
    printf("\n before replace:%s",s);
    printf("\n After replace:%s",replace(s,c1,c2));
    return 0;
}