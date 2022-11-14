/**
 * @file FIFO_Cfg.h
 * @author Ahmed Mohamed (ahmed.mohamed.eng.25@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-13 @ 15:11:83
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef FIFO_CFG_H_
#define FIFO_CFG_H_

/*****************************  User Configuration  *********************************/

// define the type of the FIFO (CIRCULAR_FIFO or LINEAR_FIFO)
#define CIRCULAR_FIFO

// select the element type (uint8_t, uint26_t, uint32_t ...)
#define element_type uint32_t

// select the max size of the FIFO
#define MAX_FIFO_WIDTH 5


#endif /* FIFO_CFG_H_ */
