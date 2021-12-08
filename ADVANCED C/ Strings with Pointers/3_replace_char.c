#include <stdio.h>

void replace(char * str, char ch1, char ch2)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == ch1)
        {
            str[i] = ch2;
        }

        i++;
    }
}

int main()
{
    char str[20], c1, c2;

    printf("Enter any string: ");
    gets(str);

    printf("Enter the character to replace: ");
    scanf(" %c", &c1);

    printf("Enter character to replace '%c' with: ",c1);
    scanf(" %c", &c2);

    printf("\nString before replacing  : \n%s", str);
    replace(str, c1, c2);
    printf("\nString after replacing  : \n%s", str);

    return 0;
}
