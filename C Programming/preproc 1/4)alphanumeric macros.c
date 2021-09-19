#include<stdio.h>
#define alphanumb1(c) printf("%c is an alphanumeric character\n",c );
#define alphanumb(c) printf("%c is not an alphanumeric character\n",c );
int alphanum(char c);
int main()
{
   char c;
    printf("Enter character: ");
    scanf(" %c", &c);
    if (alphanum(c))
        alphanumb1(c)
    else
        alphanumb(c)
return 0;
}
int alphanum(char c)
{
    if ((c >= '0' & c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return 1;
else
    return 0;
}