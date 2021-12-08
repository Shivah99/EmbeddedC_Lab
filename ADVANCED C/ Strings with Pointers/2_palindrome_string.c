#include <stdio.h>
#include <string.h>
int strpal(char *str)
{
    int i=0,j;
    j=strlen(str)-1;
    while(j>1)
    {
 if (str[i++] != str[j--])
return -1;   
else
     return 0;
}
}
int main()
{
  char a[100];
    int k;
  printf("Enter a string:\n");
  scanf("%[^\n]s",a);
    k=strpal(a);
    if(k==0)
       printf("%s is a palindrome\n",a );
    else
       printf("%s is not a palindrome\n", a);
            return 0;
    
}
