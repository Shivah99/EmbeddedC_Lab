#include <stdio.h>
#include<string.h>
char mystrchr(char str[],char ch);
int main()
{
char str[] = "Bangalore";
    char  ch = 'g';
    printf("str1:%s\nchar:%c\n",str,ch);

   
printf("Occurence of %c in %s is at pos:%d",ch,str,mystrchr(str,ch));
}
char mystrchr(char str[],char ch)
{
    int i, j, k = 0;
    char str1[12];
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
return i;
return 0;
}