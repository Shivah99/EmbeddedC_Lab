topic: strings1

Implement your own function definitions for the following string library functions,using the given declarations below:

1) int strlen(char str[]);
returns the length of the string, that is number of characters before the first null character

2)void strcpy(char dest[], char src[]);

copy all characters upto first null character from src to dest, including null character.

3)void strcat(char dest[],char str[]);
copy all characters upto first null character from src to dest starting from first null character in dest. Replace first null character in dest with first character from src and follow the remaining characters. copy null character at the end after copy.

4) void strlwr(char str[]);

convert all upper case letters to lower case.

5) void strupr(char str[]);

convert all lower case letters to upper case.

6) int strchr(char s[], char c[]);

returns the first index at which char c was found in string s.

7) void strrev(char s[]);

reverse the order of characters in the given string, upto first null character.
eg., input : kernel
output: lenrek