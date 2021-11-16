#include<stdio.h>
#include<string.h>
void mystrrev(char str[])
{
	char temp;
	int i, j, n;
	n = strlen(str);
for (i = 0, j = n - 1; i < j; ++i, --j)
    {
		temp = str[j];
		str[j] = str[i];
		str[i] = temp;
	}

}

int main()
{
	char string[100];
	printf("Enter a String: ");
	scanf("%s", string);mystrrev(string);
	printf("\n\nString After Reverse: %s", string);
}