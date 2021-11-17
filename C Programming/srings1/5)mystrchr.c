#include <stdio.h>
#include<string.h>
char mystrchr(char str[],char str1[]);
int main()
{
char str[] = "Bangalore";
    printf("str1:%s\n",str);
char str1[12];
mystrchr(str,str1);
}
char mystrchr(char str[],char str1[])
{
    int i, j, k = 0;
    char  ch = 'g';
for(i=0; str[i]!='\0'; i++){
if(str[i]==ch)	{
for(j=i; str[j]!='\0'; j++){
str1[k] = str[j];
k++;
}
str1[k]='\0';
break;
}
}
printf(" occurance of %c is at %d",ch,i);
return 0;
}