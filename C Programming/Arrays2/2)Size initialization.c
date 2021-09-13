
    #include<stdio.h>
    int main()
    {
  	int  size,  i;
  	printf("\n Enter the size of the array :  ");
  	scanf("%d",&size);
    int arr[size]={1,2,3};
  	printf("\nEnter %d elements of the array: \n", size);
  	for(i = 0; i < size; i++)
   	 	scanf("%d",&arr[i]);
	for(i = 0; i < size; i++)
    printf("%d  ",arr[i]);  
    }
    