#include<stdint.h>

void Rest_Handler (void) ;
extern int main(void);
extern uint32_t _stack_start_SP;


extern uint32_t _E_TEXT;
extern uint32_t _S_DATA;
extern uint32_t _E_DATA;
extern uint32_t _S_BSS;
extern uint32_t _E_BSS;


void Default_Handler ()
{
	Rest_Handler() ;
}

void NMI_Handler(void)__attribute__((weak, alias ("Default_Handler")));;
void H_fault_Handler(void)__attribute__((weak, alias ("Default_Handler")));;
void MM_fault_Handler(void)__attribute__((weak, alias ("Default_Handler")));;
void Bus_Fault(void)__attribute__((weak, alias ("Default_Handler")));;
void Usage_Fault_Handler(void)__attribute__((weak, alias ("Default_Handler")));;


uint32_t vectors[]__attribute__((section(".vectors")))  ={
	(uint32_t) &_stack_start_SP,
	(uint32_t) &Rest_Handler,
	(uint32_t) &NMI_Handler,
	(uint32_t) &H_fault_Handler,
	(uint32_t) &MM_fault_Handler,
	(uint32_t) &Bus_Fault,
	(uint32_t) &Usage_Fault_Handler
};

void Rest_Handler(void)
{
	int i;
	// copy data sectio from FLASH to RAM
	unsigned int DATA_SIZE = (unsigned char*)&_E_DATA -(unsigned char*)&_S_DATA;
	unsigned char* p_src = (unsigned char*)&_E_TEXT;
	unsigned char* p_dst = (unsigned char*)&_S_DATA;
	for( i=0 ; i<DATA_SIZE ;i++){
		*((unsigned char*)p_dst++)=*((unsigned char*)p_src++);
	}
	// init bss sectio in sram with zero
	unsigned int bss_size = (unsigned char*)&_E_BSS - (unsigned char*)&_S_BSS;
	p_dst = (unsigned char*)&_S_BSS ;
	for( i=0 ; i<bss_size ;i++){
		*((unsigned char*)p_dst++)=(unsigned char)0;
	}
	// jump to main
	main();
}	