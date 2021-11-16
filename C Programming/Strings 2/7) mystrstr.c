#include<stdio.h>
int StrStr(char str[], char strSub[])
{
    int i=0, j=0;
    int nTemp = i;
    int nStrLen = strlen(str);
    int nStrSubLen = strlen(strSub);
    for(i=0; i<nStrLen-nStrSubLen; i++)
    {
        nTemp = i;
        for(j=0; j<nStrSubLen; j++)
        {
             
            if(str[nTemp]==strSub[j])
            {
                if(j==nStrSubLen-1)
                    return 1;
                nTemp++;
            }
            else
                break;
        }
    }
    return 0;
}
int main()
{
    char str[20],str1[20];
    printf("enter str and str1");
    scanf("%s%s",str,str1);
 
    if(StrStr(str, str1))
        printf("%s - is  found in %s",str1,str);
    else
      printf("%s - is not found in %s",str1,str);
    return 0;       
}