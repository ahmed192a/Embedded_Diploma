/**
 * @file main.c
 * @author Ahmed Mohamed (ahmed.mohamed.eng.25@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-14 @ 13:11:23
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include "FIFO.h"
 
int main(void) {
	FIFO_Buf_t uart_fifo;
	int i;
	element_type temp;
	if(FIFO_Init(&uart_fifo, uart_buffer, 5)== FIFO_no_error){
		printf("FIFO init Done ....\n");
	}
	for(i=0; i< 7; i++){
		printf("FIFO Enqueue (%x) \n", i);
		if(FIFO_Enqueue_Item(&uart_fifo, i)== FIFO_no_error){
			printf("FIFO enqueue Done ....\n");
		}
		else{
			printf("FIFO enqueue failed ....\n");
		}
	}
	FIFO_Print(&uart_fifo);
	if(FIFO_Dequeue_Item(&uart_fifo, &temp)== FIFO_no_error){
		printf("FIFO dequeue Done ....\n");
	}
	if(FIFO_Dequeue_Item(&uart_fifo, &temp)== FIFO_no_error){
		printf("FIFO dequeue Done ....\n");
	}
	FIFO_Print(&uart_fifo);
	return EXIT_SUCCESS;
}
