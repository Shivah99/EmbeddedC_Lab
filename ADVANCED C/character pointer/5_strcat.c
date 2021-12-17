char* custom_strcat(char *s1, char *s2) 
{

    while(*s1 != '\0') /* finding the end of the string */
         s1++;
     while((*s1++ = *s2++) != '\0'); 
}
int main()
{
    char s1[100];
    char s2[100];
    printf("Enter string1: ");
    scanf("%s",s1);   
    printf("Enter string2: ");
    scanf("%s",s2);  
    custom_strcat(s1,s2);
    printf("String1 after copy :%s\n", s1);
    return 0;
}
