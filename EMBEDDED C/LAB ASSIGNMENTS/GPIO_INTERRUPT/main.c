#define RCC_AHB1ENR   (*(volatile int *)0x40023830)     //clock 40023800 +4000
#define GPIOA_MODE   (*(volatile int *)0x40020000)     //MODE
#define GPIOA_PUPDR   (*(volatile int *)0x4002000C)     //PULLUP 
#define GPIOA_ODR					*((int *)0x40020014)		//address of GPIO_ODR register

#define GPIOC_MODE   (*(volatile int *)0x40020800)     //MODE
#define GPIOC_ODR    (*(volatile int *)0x40020814)     //PULLUP 
#define GPIOC_PUPDR   (*(volatile int *)0x4002080C)

#define RCC_SYSCFG_CLK_ENABLE  (*(volatile int *)0x40023844)   
	
#define EXTI_IMR     (*(volatile int *)0x40013C00)      //0x4001 3C00  	//pg:209
#define EXTI_FTSR    (*(volatile int *)0x40013C0C)      //0x4001 3C00 EXTI_SWIER	
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


/*Write a program Request and interrupt on the falling 
edge of PA0 (whenever Enter/Weak up SW is pressed)
then toggle RED LED (PC5) and increment a counter in the interrupt.*/

//SYSCFG_EXTICR3	 
//                       
//SYSCFG external interrupt configuration register 3
//(SYSCFG_EXTICR3)
//Address offset: 0x10
//Reset value: 0x0000 0000

//Bits 31:16 Reserved, must be kept at reset value.
//Bits 15:0 EXTIx[3:0]: EXTI x configuration (x = 8 to 11)
//These bits are written by software to select the source input for the EXTIx external
//interrupt.
//0000: PA[x] pin
//0001: PB[x] pin
//0010: PC[x] pin
//0011: PD[x] pin
//0100: PE[x] pin
//0101: Reserved
//0110: Reserved

//0x40013C00  EXTI Base ADDR 

//__HAL_RCC_SYSCFG_CLK_ENABLE:40023800 +4000==40027800



int counter = 0;

void delay(int delay)
{
	int i;
		for(i=0;i<1680*delay;i++)
		{
	;
		}	
}

void PortA_Init(void)
{
		RCC_AHB1ENR=RCC_AHB1ENR|0x01;  //clock enable for portA	
		while((RCC_AHB1ENR&0x01)==0){;}	   //checking for clock
			
		GPIOA_MODE &= ~(0x01 << 16);// 
		GPIOA_MODE |= (0x01 << 16);//set PA8 as o/p		
			
		GPIOA_ODR &= ~(0x01 << 8);// GREEN LED(PA8) is clear
  	
}

void PortC_Init(void)
{
		RCC_AHB1ENR = RCC_AHB1ENR|0x04;  //clock enable for portC
		while((RCC_AHB1ENR&0x04)==0){;}	   //checking for clock 	
		
		GPIOC_MODE &= ~(0x1 << 10);
		GPIOC_MODE |= (0x1 << 10);// 0-1 bit clear - PC5(o/p) set input  direction
		GPIOC_MODE &= ~(0x01<<17);
		GPIOC_MODE &= ~(0x01<<16);//16,17 PC8 set to input
		GPIOC_MODE &= ~(0x01<<18);
		GPIOC_MODE &= ~(0x01<<19);//17,18 PC9 set to input
			
		GPIOC_PUPDR &= ~(0x1<<16);//clear PC8
		GPIOC_PUPDR |= (0x1<<16);//load 01  to PC8(DN)
		GPIOC_PUPDR &= ~(0x1<<18);//clear PC8
		GPIOC_PUPDR |= (0x1<<18);//load 01  to PC8(DN)
			
		GPIOC_ODR &= ~(0x01 << 5); //RED LED(PC5) ON
}

void PC_Interrupt_Init(void)
{
		// Step 1: Choose Port
		RCC_SYSCFG_CLK_ENABLE |= 0x1<<14;     //Syconfig clock enable  //RCC_AHB2ENR
		while((RCC_SYSCFG_CLK_ENABLE&(0x1<<14))==0){;}	   //checking for clock 	
		
		SYSCFG_EXTICR3 |= 0x0000022;// Choose PC8 Port
		// Step 2: Enable Device Side	
		EXTI_IMR |= (0x1<<8);// Enable PC8 Interrupt
		EXTI_IMR |= (0x1<<9);// Enable PC9 Interrupt	
		EXTI_FTSR |= (0x1<<8);	// Enable PC8 Falling Edge type interrupt
		EXTI_FTSR |= (0x1<<9);	// Enable PC9 Falling Edge type interrupt
	
		//	Step 3: Enable NVIC side	
		NVIC_ISER0 |= 0x1 << 23; // Enable Ext 0 in NVIC Reg
				
}

int main()
{
	PortA_Init();// PA0 set to input (-ve edge)
	PortC_Init(); // PC5 set to output (-ve edge) - RED LED ON
	PC_Interrupt_Init();

	while(1)		
	{
			;
	}
}
 
void EXTI9_5_IRQHandler (void)
{
if(EXTI_PR&(0x01<<8)) // Check PC8 Interrupt
{		
		GPIOC_ODR ^= (0x01 << 5); // RED LED TOGGLE
 	 	counter++; // Increment Counter vairable
		EXTI_PR=(0x01<<8); // Clear PC8 Interrupt 
}
if(EXTI_PR&(0x01<<9)) // Check PC8 Interrupt
{		
		GPIOA_ODR ^= (0x01 << 8); // Green LED TOGGLE
 	 	counter++; // Increment Counter vairable
		EXTI_PR=(0x001<<9); // Clear PC9 Interrupt 
}
}
