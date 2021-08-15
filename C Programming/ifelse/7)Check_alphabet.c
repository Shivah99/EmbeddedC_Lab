//check if a character is alphabet or not
#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch>=97 && ch<=122) || (ch>=65 && ch<=91))
    {
        printf("%c is an alphabet.", ch);
    }
    else
    {
        printf("\n%c is not an alphabet.", ch);
    }
    return 0;
}