
#include <stdint.h>

// Registers Address

#define RCC_BASE 	0x40021000
#define PORTA_BASE	0x40010800

#define RCC_APB2ENR *(volatile uint32_t *)(RCC_BASE + 0x18 )

#define GPIOA_CRH *(volatile uint32_t *)(PORTA_BASE + 0x04 )

#define GPIO_ODR *(volatile uint32_t *)(PORTA_BASE + 0x0C )


int main(void)

{
	int i;
	RCC_APB2ENR |=(1<<2);
	GPIOA_CRH &=0xff0fffff ;
	GPIOA_CRH |=0x00200000 ;


	/* Loop forever */
	while(1)
	{
		GPIO_ODR |=(1<<13);
		for(i=0;i<5000;i++);


		GPIO_ODR &= (~(1<<13));
		for( i=0;i<5000;i++);

	}

	return 0 ;
}