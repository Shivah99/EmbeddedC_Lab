#define RCC_AHB1ENR *((int *)(0x40023830))
#define GPIOC_MODER *((int *)(0x40020800))
#define GPIOC_ODR *((int *)(0x40020814))
	
void delay()
{
	int i;
	for(i=0;i<168000;i++)
	{
		;
	}
}

void clock()
{
	
	RCC_AHB1ENR |= (0x1<<2);//set the clock
	
while(!(RCC_AHB1ENR &= (0x1<<2)))//to check clock enable or not
{
	;
}

}
void config()
{
	GPIOC_MODER &= ~(0x1<<10);	//set bit10=0
	GPIOC_MODER &= ~(0x1<<11);//set bit11=0
	
	GPIOC_MODER |=(0x1<<10);//set bit 10=1 making 10,11  to 10
}
int main()
{
clock();
config();
	while(1)
	{
		GPIOC_ODR &= ~(0x1<<5);//red will be on
		delay();
		GPIOC_ODR |= (0x1<<5);//red will be off
		delay();
	}
	return 0;
}	
