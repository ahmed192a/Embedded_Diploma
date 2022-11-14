/**
 * @file FIFO.h
 * @author Ahmed Mohamed (ahmed.mohamed.eng.25@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-14 @ 13:11:45
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef FIFO_H_
#define FIFO_H_

#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"
#include "FIFO_Cfg.h"


extern element_type uart_buffer[];

// type definitions
typedef struct {
	uint32_t lenght;
	uint32_t  count;
	element_type * base;
	element_type * head;
	element_type * tail;
}FIFO_Buf_t;

typedef enum{
	FIFO_no_error,
	FIFO_full,
	FIFO_empty,
	FIFO_Null
}FIFO_status;

// APIs
FIFO_status FIFO_Init(FIFO_Buf_t *FIFO_buf, element_type *buf, element_type size);
FIFO_status FIFO_Enqueue_Item(FIFO_Buf_t *FIFO_buf, element_type item);
FIFO_status FIFO_Dequeue_Item(FIFO_Buf_t *FIFO_buf, element_type * item);
FIFO_status FIFO_IS_FULL(FIFO_Buf_t *FIFO_buf);
void FIFO_Print(FIFO_Buf_t *FIFO_buf);
void print_hello(void);

#endif /* FIFO_H_ */
