#include <stdio.h>
int fun_alpha_num(char c);
int main()
{
    char c;
    printf("Enter character: ");
    scanf("%c", &c);
    if (fun_alpha_num(c))
        printf("%c is an alphanumeric character\n",c);
    else
        printf("%c is not an alphanumeric character\n",c);
return 0;
}
int fun_alpha_num(char c)
{
    if ((c >= '0' & c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return 1;
else
    return 0;
}
