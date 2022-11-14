/**
 * @file FIFO1.cpp
 * @author Ahmed Mohamed (ahmed.mohamed.eng.25@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-14 @ 13:11:98
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <gtest/gtest.h>
#include "../src/FIFO.c"

TEST(FIFO, Fifo_initialization)
{
    FIFO_Buf_t FIFO_buf;
    FIFO_status status = FIFO_Init(&FIFO_buf, uart_buffer, MAX_FIFO_WIDTH);
    EXPECT_EQ(status, FIFO_no_error);
}