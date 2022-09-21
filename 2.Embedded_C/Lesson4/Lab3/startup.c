//startup.c
#include<stdint.h>

void Rest_Handler (void) ;
extern int main(void);
static uint32_t _stack_start_SP[265];


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


 
  void(*const  g_P_vectors[])()__attribute__((section(".vectors")))  =
  {
	 (void (*)()) ((uint32_t)_stack_start_SP +sizeof(_stack_start_SP)),
	 &Rest_Handler,
	 &NMI_Handler,
	 &H_fault_Handler,
	 &MM_fault_Handler
  };	  

void Rest_Handler(void)
{
	// copy data sectio from FLASH to RAM
	unsigned int DATA_SIZE = (unsigned char*)&_E_DATA -(unsigned char*)&_S_DATA;
	unsigned char* p_src = (unsigned char*)&_E_TEXT;
	unsigned char* p_dst = (unsigned char*)&_S_DATA;
	for(int i=0 ; i<DATA_SIZE ;i++){
		*((unsigned char*)p_dst++)=*((unsigned char*)p_src++);
	}
	// init bss sectio in sram with zero
	unsigned int bss_size = (unsigned char*)&_E_BSS - (unsigned char*)&_S_BSS;
	p_dst = (unsigned char*)&_S_BSS ;
	for(int i=0 ; i<bss_size ;i++){
		*((unsigned char*)p_dst++)=(unsigned char)0;
	}
	// jump to main
	main();
}