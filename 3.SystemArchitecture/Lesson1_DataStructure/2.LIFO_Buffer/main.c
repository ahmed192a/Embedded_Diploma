/**
 * @file main.c
 * @author Ahmed Mohamed (ahmed.mohamed.eng.25@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-14 @ 15:11:66
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "LIFO.h"


int main(){
	int i, temp;
	LIFO_Buf_t uart_lifo, I2c_lifo;
	//static allocation
	LIFO_Init(&uart_lifo, buffer1, 5);
	// Dynamic allocation
	element_type * buffer2 = (element_type *)malloc(5*sizeof(element_type ));
	LIFO_Init(&I2c_lifo, buffer2, 5);

	for(i=0; i<5; i++){
		if(LIFO_Add_Item(&uart_lifo, i)== LIFO_no_error){
			printf("UART LIFO add : %d \n", i);
		}
	}

	for(i=0; i<5; i++){
		if(LIFO_Get_Item(&uart_lifo, &temp)==LIFO_no_error){
			printf("UART LIFO get : %d \n", temp);
		}
	}


	return 0;
}
