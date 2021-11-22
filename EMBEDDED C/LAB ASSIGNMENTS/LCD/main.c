#define RCC_AHB1ENR   (*(volatile int *)0x40023830)     //clock 40023800 +4000
#define GPIOA_MODE   (*(volatile int *)0x40020000)     //MODE
#define GPIOA_PUPDR   (*(volatile int *)0x4002000C)     //PULLUP 

#define GPIOB_ODR    (*(volatile int *)0x40020414)			//PB
#define GPIOB_MODE   (*(volatile int *)0x40020400)     //MODE

#define GPIOC_MODE   (*(volatile int *)0x40020800)     //MODE
#define GPIOC_ODR    (*(volatile int *)0x40020814)     //PC 
	
#define RCC_SYSCFG_CLK_ENABLE  (*(volatile int *)0x40023844)   
	
#define EXTI_IMR     (*(volatile int *)0x40013C00)      //0x4001 3C00
#define EXTI_FTSR    (*(volatile int *)0x40013C0c)      //0x4001 3C00 EXTI_SWIER	
#define EXTI_PR      (*(volatile int *)0x40013C14)      //0x4001 3C00 EXTI_SWIER

//*********NVIC-REGISTERS**********

#define NVIC_ISER0       (*(volatile int *)0xE000E100)      //INterrupt Range is 31 to 0
#define NVIC_ISER1       (*(volatile int *)0xE000E104)      //INterrupt Range is 63 to 32
#define NVIC_ISER2       (*(volatile int *)0xE000E108)      //INterrupt Range is upto end to 64
	
//********************
#define SYSCFG_EXTICR1   (*(volatile int *)0x40013808) 
#define SYSCFG_EXTICR2   (*(volatile int *)0x4001380C) 
#define SYSCFG_EXTICR3   (*(volatile int *)0x40013810)  //PORT[X] and Pin[X] Nmuber selection
#define SYSCFG_EXTICR4   (*(volatile int *)0x40013814) 

#define SCB_SCR          (*(volatile int *)0xE000ED10)			//System control block

//*********LCD**********
#define RS(X) ( (X) ? (GPIO_PORTA_DATA_R |= (1<<7)) : (GPIO_PORTA_DATA_R &= ~(1<<7)) )
#define EN(X) ( (X) ? (GPIO_PORTA_DATA_R |= (1<<6)) : (GPIO_PORTA_DATA_R &= ~(1<<6)) )
#define RW(X) ( (X) ? (GPIO_PORTA_DATA_R |= (1<<5)) : (GPIO_PORTA_DATA_R &= ~(1<<5)) )


void delay(int n)
{
	int i,x;
	x=n*1680;
	for(i=0;i<x;i++);
}

void write_high_nibble(unsigned char ch)  //0x41= 0100 0001
{
	//GPIOB_ODR |= (0x1<<4);		//PB4=RS=1
	GPIOB_ODR &= ~(0x0F);				//clear lower nibble
	GPIOB_ODR |= ((ch>>4)&(0x0F)); 	//make lower nib=0100
	
	GPIOB_ODR |= (0x1<<8);		//EN=1
	delay(10);
	GPIOB_ODR &= ~(0x1<<8);		//EN=0
}

void write_low_nibble(unsigned char ch)
{
	//GPIOB_ODR |= (0x1<<4);		//PB4=RS=1
	GPIOB_ODR &= ~(0x0F);				//clear lower nibble
	GPIOB_ODR |= ((ch)&(0x0F)); 	//make lower nib=0001
	
	GPIOB_ODR |= (0x1<<8);		//EN=1
	delay(10);
	GPIOB_ODR &= ~(0x1<<8);		//EN=0
}

void PORTB_init()
{
	RCC_AHB1ENR |= (0X1<<1);
	while((RCC_AHB1ENR & (0X1<<1))==1){;}//check clock
	
	GPIOB_MODE |= (0x1<<0);
	GPIOB_MODE &= ~(0x1<<1);//pb0
	GPIOB_MODE |= (0x1<<2);
	GPIOB_MODE &= ~(0x1<<3);//pb1
	GPIOB_MODE |= (0x1<<4);
	GPIOB_MODE &= ~(0x1<<5);//pb2
	GPIOB_MODE |= (0x1<<6);
	GPIOB_MODE &= ~(0x1<<7);
	GPIOB_MODE |= (0x1<<8);
	GPIOB_MODE &= ~(0x1<<9);
	GPIOB_MODE |= (0x1<<10);
	GPIOB_MODE &= ~(0x1<<11);
	GPIOB_MODE |= (0x1<<16);
	GPIOB_MODE &= ~(0x1<<17);
	GPIOB_MODE &= ~(0x1<<11);
	GPIOB_MODE |= (0x1<<0);		//set PB0 to PB5 1-0 to o/p mode
	GPIOB_ODR &= ~(0x1<<4);			//RS='0'
	GPIOB_ODR &= ~(0x1<<5);			//RW='0'
	GPIOB_ODR &= ~(0x1<<8);			//EN = '0'
}

void KM_LCD_Write_Data(unsigned char data)
{
	GPIOB_ODR |= (0x1<<4);  //rs=1
	GPIOB_ODR &= ~(0x1<<5);	//rw=0
	write_high_nibble(data);
	write_low_nibble(data);
	GPIOB_ODR &= ~(0x1<<4); //rs=0
}

void  KM_LCD_Write_Cmd(unsigned char cmd)
{
	
	GPIOB_ODR &= ~(0x1<<4); //rs=0	
	GPIOB_ODR &= ~(0x1<<5);	//rw=0
	
	write_high_nibble(cmd);
	write_low_nibble(cmd);
}

void KM_LCD_str(char *a)
{
	int i=0;
	while(a[i]!='\0')
	{
		KM_LCD_Write_Data(a[i]);
		i++;
	}
}


void LCD_init(void)
{
delay(20);
KM_LCD_Write_Cmd(0x33);
delay(1);
KM_LCD_Write_Cmd(0x32);

KM_LCD_Write_Cmd(0x0C);

KM_LCD_Write_Cmd(0x01);//clear 

KM_LCD_Write_Cmd(0x80);//cursor at row=1
	
}

int main()
{ 
PORTB_init();
LCD_init();
KM_LCD_str("KERNEL");
//KM_LCD_Write_Data('A');
while(1)
{;}
return 0;
}











