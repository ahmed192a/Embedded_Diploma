ENTRY(Rest_Handler)
MEMORY
{
   FLASH(rx) : ORIGIN = 0x08000000, LENGTH = 128K
   RAM(rwx)  : ORIGIN = 0x20000000, LENGTH = 20K       
}

SECTIONS {
	
	.text :
	{
	   *(.text*)
	   *(.rodata)
	   _E_TEXT = . ;
	}>FLASH 
	
	.data :
	{
		_S_DATA = . ;
	   *(.data)
	   . = ALIGN(4);
	   _E_DATA = . ;
	}>RAM AT >FLASH
	
	.bss :
	{	_S_BSS = . ;
	   *(.bss*)
	   . = ALIGN(4);
	   _E_BSS = . ;

	}>RAM
    . = . + 0x10000;
    _stack_start_SP = .;

}