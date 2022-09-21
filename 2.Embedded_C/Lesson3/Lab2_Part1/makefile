#@copyright : Ahmed
CC=arm-none-eabi-
CFLAGS=-g -mcpu=arm926ej-s
INCS=-I .
LIBS=
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
AS=$(wildcard *.s)
ASOBJ=$(AS:.s=.o)

project_name=learn-in-depth

all: $(project_name).bin
	@echo "**************Build is Done**************"
%.o: %.s
	$(CC)as  $(CFLAGS) $< -o $@
	
%.o: %.c
	$(CC)gcc -c $(CFLAGS) $(INCS) $< -o $@


$(project_name).elf: $(ASOBJ) $(OBJ) 
	$(CC)ld -T linker_script.ld $(LIBS) $(OBJ) $(ASOBJ) -o $@ -Map=Map_file.map

$(project_name).bin: $(project_name).elf
	$(CC)objcopy -O binary $< $@

clean_all:
	rm *.bin *.elf *.o *.map
clean:
	rm *.bin *.elf *.map