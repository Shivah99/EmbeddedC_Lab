#include <stdio.h>
 
int main()
{
    char s[100];  
    int  i,j;
 
    printf("Enter a string : ");
    gets(s);
    
	printf("Before trim :\t <%s>",s);
	for(i=0;s[i]==' ';i++);             //trim leading white space 
 
	for(j=0;s[i];i++)                   //beginning of string without whitespaces 
	{
		s[j++]=s[i];
	}
	s[j]='\0';
	for(i=0;s[i]!='\0';i++)             //iterate till the string boecomes null
	{
		if(s[i]!=' ')
				j=i;
	}
	s[j+1]='\0';
    printf("\nAfter trim:\t <%s>",s);
    return 0;
}
