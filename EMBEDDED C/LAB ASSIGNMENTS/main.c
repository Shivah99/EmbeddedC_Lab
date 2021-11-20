/*Experiment 2: 
Airplane wing Lights blinking Delays: 
USER LED1 (GREEN – PA8): ON (50msec), OFF (50msec), ON (50msec), OFF (150msec) periodically. 
USER LED2 (RED – PC5): ON (50msec), OFF (250msec), ON (50msec), OFF (500msec) periodically. */

#define RCC_AHB1ENR *((int *)(0x40023830))
#define GPIOC_MODER *((int *)(0x40020800))
#define GPIOC_ODR *((int *)(0x40020814))
#define GPIOA_MODER *((int *)(0x40020000))
#define GPIOA_ODR *((int *)(0x40020014))

void delay(void)
{
	int i;
	for(i=0;i<168000/2;i++)//50ms
	{
		;
	}
}
void delay1(void)
{
	int i;
	for(i=0;i<(168000/2)*5;i++)//200ms
	{
		;
	}
}

void GREEN_init(void)//user LED1
{
RCC_AHB1ENR |= (0x1);//set port A bit to enable the clock	
while(!(RCC_AHB1ENR &= (0x1)))//to check clock enable or not
{
	;
}
GPIOA_MODER &= ~(0x1<<17);
GPIOA_MODER &= ~(0x1<<16);//clear 17th and 16th bit
GPIOA_MODER |= (0x1<<16);//set bit17=0;16thbit=1,pa8 is o/p
}
void RED_init(void)//user LED2
{
RCC_AHB1ENR |= (0x1<<2);//set port c bit to enable the clock
while(!(RCC_AHB1ENR &= (0X1<<2)))//to check clock enable or not
{
	;
}
GPIOC_MODER &= ~(0x1<<10);
GPIOC_MODER &= ~(0x1<<11);//clear 10th and 11th bit
GPIOC_MODER |= (0x1<<10);//set bit11=0;10thbit=1,pc5 is o/p
}
void RED()
{
	GPIOC_ODR &= ~(0x1<<5);//red will be on
		delay();
		GPIOC_ODR |= (0x1<<5);//red will be off
		delay1();
}
void GREEN()
{
		GPIOA_ODR |= (0x1<<8);//red will be off
		delay1();
		GPIOA_ODR &= ~(0x1<<8);//red will be on
		delay1();
}
int main()
{
GREEN_init();
RED_init();
while(1)
	{
		RED();
		GREEN();
	}
	return 0;
}	
