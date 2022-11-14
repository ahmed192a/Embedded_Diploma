/**
 * @file FIFO.c
 * @author Ahmed Mohamed (ahmed.mohamed.eng.25@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-13 @ 15:11:30
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "FIFO.h"

element_type uart_buffer[MAX_FIFO_WIDTH];

/**
 * @brief Initialize the FIFO
 * 
 * @param FIFO_buf 		Pointer to the FIFO buffer
 * @param buf 			Pointer to the buffer
 * @param size 			Size of the buffer
 * @return FIFO_status	Status of the FIFO
 * 
 * @version 0.1
 * @author Ahmed Mohamed (ahmed.mohamed.eng.25@gmail.com)
 */
FIFO_status FIFO_Init(FIFO_Buf_t *FIFO_buf, element_type *buf, element_type size){
	if (buf ==NULL){		// Check if the buffer is NULL
		return FIFO_Null;	// Return NULL
	}
	
	// Initialize the FIFO
	FIFO_buf->base = buf;		// Set the base of the buffer
	FIFO_buf->head = buf;		// Set the head of the buffer
	FIFO_buf->tail = buf;		// Set the tail of the buffer
	FIFO_buf->lenght = size;	// Set the lenght of the buffer
	FIFO_buf->count = 0;		// Set the count of the buffer
	
	return FIFO_no_error;		// Return no error
}
void print_hello(void){
	printf("Hello World");
}

/**
 * @brief Add an element to the FIFO
 * 
 * @param FIFO_buf 			Pointer to the FIFO buffer
 * @param item 				Pointer to the item
 * @return FIFO_status 		Status of the FIFO
 * 
 * @version 0.1
 * @author Ahmed Mohamed (ahmed.mohamed.eng.25@gmail.com)
 */
FIFO_status FIFO_Enqueue_Item(FIFO_Buf_t *FIFO_buf, element_type item){
	// check if FIFO is valid
	if(!FIFO_buf->base || !FIFO_buf->head || !FIFO_buf->tail){
			return FIFO_Null;
	}
	// check FIFO is Full or not
	if(FIFO_IS_FULL(FIFO_buf) == FIFO_full){
		return FIFO_full;
	}
	// add value
	*(FIFO_buf->head) = item;
	FIFO_buf->count++;
	// circler fifo
	#ifdef CIRCULAR_FIFO
		FIFO_buf->head = (FIFO_buf->head == (FIFO_buf->base + FIFO_buf->lenght - 1)) ? FIFO_buf->base : FIFO_buf->head + 1;
	#elif defined LINEAR_FIFO
		FIFO_buf->head++;
	#endif

	return FIFO_no_error;
}

FIFO_status FIFO_Dequeue_Item(FIFO_Buf_t *FIFO_buf, element_type * item){
	// check if FIFO is valid
	if(!FIFO_buf->base || !FIFO_buf->head || !FIFO_buf->tail){
			return FIFO_Null;
	}
	// check FIFO is empty or not
	if(FIFO_buf->count == 0){
		return FIFO_empty;
	}

	// get value
	*item = *FIFO_buf->tail;
	FIFO_buf->count --;

	#ifdef CIRCULAR_FIFO
		FIFO_buf->tail = (FIFO_buf->tail == (FIFO_buf->base + FIFO_buf->lenght - 1)) ? FIFO_buf->base : FIFO_buf->tail + 1;
	#elif defined LINEAR_FIFO
		FIFO_buf->tail++;
	#endif

	return FIFO_no_error;
}
FIFO_status FIFO_IS_FULL(FIFO_Buf_t *FIFO_buf){
	// check if FIFO is valid
	if(!FIFO_buf->base || !FIFO_buf->head || !FIFO_buf->tail){
			return FIFO_Null;
	}
	// check FIFO is Full or not
	if(FIFO_buf->count == FIFO_buf->lenght){
		return FIFO_full;
	}
	return FIFO_no_error;
}
void FIFO_Print(FIFO_Buf_t *FIFO_buf){
	element_type *temp;
	int i;
	if(FIFO_buf->count == 0){
		printf("FIFO is empty \n");
	}
	else{
		temp = FIFO_buf->tail;
		printf("\n ===fifo print ===\n");
		for(i = 0; i< FIFO_buf->count; i++){
			printf("\t %x \n", *temp);
			#ifdef CIRCULAR_FIFO
				temp = (temp == (FIFO_buf->base + FIFO_buf->lenght - 1)) ? FIFO_buf->base : temp + 1;
			#elif defined LINEAR_FIFO
				temp++;
			#endif
		}
		printf(" ====================\n");
	}
	

}


