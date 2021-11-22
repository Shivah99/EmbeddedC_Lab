#define RCC_AHB1ENR				*((int *)0x40023830)    //address of AHB1Peripheral Clock Enable Reg
#define GPIOC_MODER       *((int *)0x40020800)		//address of GPIO_Mode Register
#define GPIOC_IDR					*((int *)0x40020810)		//address of GPIOC_IDR register
#define GPIOC_ODR					*((int *)0x40020814)		//address of GPIOC_ODR register
#define GPIOA_MODER       *((int *)0x40020000)		//address of GPIO_Mode Register
#define GPIOA_ODR					*((int *)0x40020014)		//address of GPIO_ODR register
#define GPIOC_PUPDR       *((int *)0x4002080C)    //address of GPIO_PUPDR register
#define GPIOA_PUPDR       *((int *)0x4002000C)		//address of GPIOA PUPDR register
#define GPIOA_IDR         *((int *)0x40020010)		//address of GPIOA_IDR register


void delay(int n)
{
	int i,x;
	x=n*1680;
	for(i=0;i<x;i++);
}

 void clock()
{
	RCC_AHB1ENR |= (0X1<<2);  // enabling clock to PORT C
	RCC_AHB1ENR |= (0X1);  // enabling clock to PORT A
	while( (!(RCC_AHB1ENR &(0X05)))&&(!(RCC_AHB1ENR &(0X01))));  
}

void config()
{
	GPIOA_MODER &= ~(0x3<<16);// clearing 16th and 17th bit
	GPIOA_MODER |= (0x1<<16);// load 01 to the 16th bit,17
	
	GPIOC_MODER &= ~(0x3<<10);// clearing 10th and 11th bit
	GPIOC_MODER |= (0x1<<10);// load 01 the to 10th bit,11
	
	GPIOA_PUPDR &= ~(0x1);//clear 
	GPIOA_PUPDR |= (0x1);//load 01  to PA0,no clear required(EN) 
	
	GPIOC_PUPDR &= ~(0x1<<16);//clear PC8
	GPIOC_PUPDR |= (0x1<<16);//load 01  to PC8(DN)
	
	GPIOC_PUPDR &= ~(0x1<<18);//clear PC9
	GPIOC_PUPDR |= (0x1<<18);//load 01  to PC9(UP)
	
	GPIOA_ODR |= (0x1<<8); //set (PA8)GREEN LED to OFF
	GPIOC_ODR |= (0x1<<5); //set (PC5)RED LED to OFF
}

int main()
{
	clock();
	config();
	while(1)
	{
			if(!((GPIOC_IDR & (0x1<<8))))//PA0
		{
			GPIOC_ODR &= ~(0x1<<5); //set red led to ON
			delay(250);
			GPIOC_ODR |= (0x1<<5); 
		}
			if(!((GPIOC_IDR & (0x1<<9))))//PA0
		{
			GPIOA_ODR &= ~(0x1<<8); //set red led to ON
			delay(250);
			GPIOA_ODR |= (0x1<<8); 
		}
	}
}
