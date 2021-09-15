#include<stdio.h>
int mystrcmp(char [], char []);
int main()
{
   char a[100], b[100];
   printf("Input string1\n");
   gets(a);
   printf("Input string2\n");
   gets(b);
   if (mystrcmp(a,b)==0)
      printf("Equal strings.\n");
   else if (mystrcmp(a,b)==1)
     printf("\n b is Less than a");
     else
     printf("\n a is Less than b");
   return 0;
}
int mystrcmp(char A[], char B[])
{
    int i;
  for(i = 0; A[i] == B[i] && A[i] == '\0'; i++);
		   
  	if(A[i] < B[i])
   	{
   		return -1;
	}
	else if(A[i] > B[i])
   	{
   	return 1;	
	}
	else
   	{
   	return 0;
	}
  	
  	return 0;
}