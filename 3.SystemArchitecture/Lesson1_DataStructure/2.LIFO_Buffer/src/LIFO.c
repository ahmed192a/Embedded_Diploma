/**
 * @file LIFO.c
 * @author Ahmed Mohamed (ahmed.mohamed.eng.25@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-14 @ 15:11:88
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "LIFO.h"

element_type buffer1[MAX_LIFO_WIDTH];

LIFO_status LIFO_Init(LIFO_Buf_t *lifo_buf, element_type *buf, element_type size){
	if (buf ==NULL){
		return LIFO_Null;
	}
	lifo_buf->base = buf;
	lifo_buf->head = buf;
	lifo_buf->lenght = size;
	lifo_buf->count = 0;
	return LIFO_no_error;


}
LIFO_status LIFO_Add_Item(LIFO_Buf_t *lifo_buf, element_type item){
	// check if LIFO is valid
	if(!lifo_buf->base || !lifo_buf->head ){
			return LIFO_Null;
	}
	// check LIFO is Full or not
	if(lifo_buf->count == lifo_buf->lenght){
		return LIFO_full;
	}
	// add value
	*(lifo_buf->head) = item;
	lifo_buf->head++;
	lifo_buf->count++;
	return LIFO_no_error;
}
LIFO_status LIFO_Get_Item(LIFO_Buf_t *lifo_buf, element_type * item){
	// check if LIFO is valid
	if(!lifo_buf->base || !lifo_buf->head ){
			return LIFO_Null;
	}
	// check LIFO is Full or not
	if(lifo_buf->count == 0){
		return LIFO_empty;
	}
	// get value

	lifo_buf->head--;
	lifo_buf->count--;
	*item = *(lifo_buf->head) ;
	return LIFO_no_error;
}


