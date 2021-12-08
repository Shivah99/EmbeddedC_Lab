#include<stdio.h>

void mystrrev(char *str)
{
	char temp;
	int i, j, n;
	n = mystrlen(str);
for (i = 0, j = n - 1; i < j; ++i, --j)
    {
		temp = str[j];
		str[j] = str[i];
		str[i] = temp;
	}

}

int mystrlen(char *s)
{
    int c=0;
    while(*s!='\0')
    {
       s++;
        c++;
    }
    return c;
}


int main()
{
    char s[100];
    int d;
    printf("Enter a String: ");
    scanf("%s",s);
    mystrrev(s);
    printf("reverse of the String: %s",s);
    return 0; 
}
