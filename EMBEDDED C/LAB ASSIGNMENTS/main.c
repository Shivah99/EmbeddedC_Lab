 #define RCC_AHB1ENR *((int *)(0x40023830))
#define GPIOA_MODER *((int *)(0x40020000))//pc8
#define GPIOC_MODER *((int *)(0x40020800))//pc5
#define GPIOA_PUPDR	*((int *)(0x4002000C))//PA
#define GPIOC_PUPDR	*((int *)(0x4002000C))//PC
#define GPIOA_IDR *((int *)(0x40020010))
#define GPIOC_ODR *((int *)(0x40020814))
#define GPIOA_ODR *((int *)(0x40020814))
#define GPIOC_IDR *((int *)(0x40020810))

void delay()
{
	int i;
	for(i=0;i<168000;i++)
	{
		;//100ms
	}
}

 void clock()
{
	RCC_AHB1ENR |= (0x5); //setting clock
	while(!(RCC_AHB1ENR &= (0x5)))
	{
		;//checking clock enable/disable
	}
}

void config()
{
	GPIOA_MODER &= ~(0x3<<16);// clearing 16th and 17th bit
	GPIOA_MODER |= (0x1<<16);// load 01 to the 16th bit,17
	
	GPIOC_MODER &= ~(0x3<<10);// clearing 10th and 11th bit
	GPIOC_MODER |= (0x1<<10);// load 01 the to 10th bit,11
	
	GPIOA_PUPDR &= ~(0x1);//clear 
	GPIOA_PUPDR |= (0x1);//load 01  to PA0,no clear required(EN) 

	GPIOA_ODR &= ~(0x1<<8); //PA8 clear
	GPIOC_ODR |= (0x1<<5); //set (PC5)red led to OFF
}

int main()
{
	clock();
	config();
	while(1)
	{
			if(!((GPIOA_IDR &= (0x1<<0))))//PA0
		{
		
			GPIOC_ODR &= ~(0x1<<5); //set red led to ON
			delay();
			GPIOC_ODR |= (0x1<<5); 
			delay();
		}
	}
}

