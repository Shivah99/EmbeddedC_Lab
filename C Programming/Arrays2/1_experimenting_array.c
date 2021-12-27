/*	"Try experimenting with the below array syntaxes and see the results,check their sizes, try to also read values for elements and print them:</br> 
int arr[5] = {}; 
int arr[10] = {2.4,5.6,7.3};
int arr[3] = {1,2,3,4,5};
int arr[0] = {};
int arr[0] = {1,2,3,4,5};
int arr[] = {};
int arr[‘a’];"  */

#include<stdio.h>
int main()
{
int arr[5]={};
printf("%d\n",sizeof(arr));
int arr1[10] = {2.4,5.6,7.3};
    printf("%d\n",sizeof(arr1));
int arr2[3] = {1,2,3,4,5};
    printf("%d\n",sizeof(arr2));
int arr3[0] = {};
    printf("%d\n",sizeof(arr3));
int arr4[0] = {1,2,3,4,5};
    printf("%d\n",sizeof(arr4));
int arr5[] = {};
    printf("%d\n",sizeof(arr5));
//int arr6[‘a’];
 // printf("%d\n",sizeof(arr6));
}