
char* upper(char *s)
{
    while(*s !='\0') 
    {
        if(*s >= 'A' && *s <= 'Z') 
            *s=*s+32;
        else
            *s;
        s++;
    }
    return s;
}

int main()
{
    char str[100];
    printf("Enter String : ");
    scanf("%s",str);
    upper(str);
     printf("String after Conversion: %s ",str);
}

// not working for multiple wrds