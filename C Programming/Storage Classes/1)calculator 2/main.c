
#include<stdio.h>
#include"operations.c"
int main()
{
char ch;
while (ch!= 'n')
{
printf("Press '+' Addition,'-' subdtraction,'*' multiply,'/' dividing\n");
printf ("To Exit Press 'n'\n");
scanf(" %c", &ch);
if (ch== 'n')
printf ("\nNo Operations performed\n");
else
{
Calc(ch);
printf("\n");
}
}}
