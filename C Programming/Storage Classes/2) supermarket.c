#include<stdio.h>

int main()
{
    printf("!!Welcome_/\\_ ! to our Super Market!!\n");
     
    char op;
    printf("Enter any key to continue Shopping or\n Enter 'n' Key to exit:");
    scanf(" %c", &op);
    if(op=='N' ||op== 'n' )
    {
        
    printf("Thank you!. Visit Again_/\\_");
        exit(0);
    }
     else
    {

      int ch,a;
    printf("\nEnter the option to be performed from below list:\n");
    printf("\n1) check AvailableStock \n2) Purchase new items \n3) Sell items");
    scanf("%d",&ch);
 supermarket(ch,a);
    }
   
        
    return 0;
}

int supermarket(int ch, int a)
{
while(ch<=3)
 {
    if(ch==1)
    {
        check_AvailableStock(a,ch);
}
    else if(ch==2)
        purchase_new(a);
    else if(ch==3)
        sell_items(a);
    else 
    {
    printf("Some error occured.Retry!");
        break;
    }    
}}
int stock(int a)   
{
    printf("Enter the stock:");
    scanf("%d",&a);
 
    printf(" \nQuantity of stock : %d\n",a);

    return a;

    
}
int sales(int a)
{
    int sold;
 sell(a);
printf("\nStock sold");
    
}
int purchase(int a)
{
    int c,ch,b=500;
    a=stock(a);
    if(a<150)
    {
    c=b-a;
        printf("Stock is less, Restock!!\n");
    purchase(a);
    }
        else
        {
          supermarket(ch,a);  
        }
    
    
}
int sell(int a)
{
    int b;
   
    printf("Enter the Quantity to be  sold:\n");
    scanf("%d",&b);
    a=stock(a);
    
  if(b>a)
  {
      printf("\nSorry!\nNot enough Quantity.");
      purchase(a);
      sell(a);
      
  }
    else
    {
    a=a-b;
        printf("Stock sold =%d\n",b);
        printf("available stock =%d\n",a);
        
       
    }
    if(a<150)
    {
        printf("Stock is low, Re-Stock!!\n");
        purchase(a); 
    }
        return a;
    
        
}
int check_AvailableStock(int a)
{
   
   return stock(a);
}
int purchase_new(int a)
{
    return purchase(a );
}
int sell_items(int a)
{
    return sell(a);
}