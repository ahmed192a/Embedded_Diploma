ENTRY(Rest_Handler)
MEMORY
{
   FLASH(rx) : ORIGIN = 0x00000000, LENGTH = 512M
   RAM(rwx)  : ORIGIN = 0x20000000, LENGTH = 512M      
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


}