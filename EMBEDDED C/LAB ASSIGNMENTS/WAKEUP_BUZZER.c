#define RCC_AHB1ENR *((int *)(0x40023830))
#define GPIOA_MODER *((int *)(0x40020000))//pc8
#define GPIOB_MODER *((int *)(0x40020400))
#define GPIOA_PUPDR	*((int *)(0x4002000C))
#define GPIOA_IDR *((int *)(0x40020010))
#define GPIOB_ODR *((int *)(0x40020414))
#define GPIOA_ODR *((int *)(0x40020814))


void delay()
{
	int i;
	for(i=0;i<(168000/2)*5;i++)
	{
		;//250ms
	}
}

 void clock()
{
	RCC_AHB1ENR |= (0x3); //setting clock
	while(!(RCC_AHB1ENR &= (0x3)))
	{
		;//checking clock enable/disable
	}
}

void config()
{
	GPIOB_MODER &= ~(0x3<<25);// clearing 25th=0
	GPIOB_MODER |= (0x1<<24);// load 1 to the 24=1
		
	GPIOA_PUPDR &= ~(0x1);//clear 04
	GPIOA_PUPDR |= (0x1);//load 01  to PA0,no clear required(EN) 
	
	GPIOB_ODR |= ~(0x1<<12); //set PB12 Buzzer off
}

int main()
{
	clock();
	config();
	while(1)
	{
			if(!((GPIOA_IDR &= (0x1<<0))))//PA0
		{
			GPIOB_ODR |= (0x1<<12); //buzzer off
			delay();
			GPIOB_ODR &= ~(0x1<<12); //buzzer on
			delay();
		}
	}
}

