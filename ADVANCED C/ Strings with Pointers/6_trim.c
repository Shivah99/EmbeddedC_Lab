#include <stdio.h>
#include<string.h>

int main()
{
    char s[100];  
 
    printf("Enter a string : ");
    gets(s);
    
	printf("Before trim :\t <%s>",s);
    printf("\nstrlen:%d\n",strlen(s));
    
    trim(s);
    
    printf("\nAfter trim:\t <%s>",s);
    printf("\nstrlen:%d",strlen(s));
    return 0;
}
void trim(char s[])
{
    int i,j;
    
	for(i=0;s[i]==32;i++);             //trim leading white space 
 
	for(j=0;s[i];i++)                   //beginning of string without whitespaces 
	{
		s[j++]=s[i];
	}
	s[j]='\0';
	for(i=0;s[i]!='\0';i++)             //iterate till the string boecomes null
	{
		if(s[i]!=32)
				j=i;
	}
	s[j+1]='\0';
}
