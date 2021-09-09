#include<stdio.h>
#define SIZE 100
int main()
{
  	int  n,  i,search;
  	printf("\n Enter the size of the array :  ");
  	scanf("%d",&n);
    int arr[n];
  	printf("\nEnter %d elements of the array: \n", n);
  	for(i = 0; i < n; i++)
   	{
   	 	scanf("%d",&arr[i]);
   	}
	
	printf("\nEnter the Search Element  :  ");
  	scanf("%d",&search);  
  	for(i = 0; i < n; i++)
   	{
   		if(arr[i] == search)
     	{
  		printf("\n the Search Element %d at Position %d ", search, i+1);
            break;
	    }
	    if(i==n)
	    {
		printf("\n Sorry!! no Element %d ", search);
        break;
	    }	  	
    }
}