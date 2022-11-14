/**
 * @file LIFO.h
 * @author Ahmed Mohamed (ahmed.mohamed.eng.25@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-14 @ 15:11:60
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef LIFO_H_
#define LIFO_H_
#include "stdio.h"
#include "stdlib.h"
#include "LIFO_Cfg.h"

extern element_type buffer1[];


// type definitions
typedef struct {
	uint32_t lenght;
	uint32_t  count;
	element_type * base;
	element_type * head;
}LIFO_Buf_t;

typedef enum{
	LIFO_no_error,
	LIFO_full,
	LIFO_empty,
	LIFO_Null
}LIFO_status;

// APIs
LIFO_status LIFO_Init(LIFO_Buf_t *lifo_buf, element_type *buf, element_type size);
LIFO_status LIFO_Add_Item(LIFO_Buf_t *lifo_buf, element_type item);
LIFO_status LIFO_Get_Item(LIFO_Buf_t *lifo_buf, element_type * item);



#endif /* LIFO_H_ */
