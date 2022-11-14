/**
 * @file LIFO1.cpp
 * @author Ahmed Mohamed (ahmed.mohamed.eng.25@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-14 @ 13:11:98
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <gtest/gtest.h>
#include "LIFO.c"

TEST(LIFO_Test, Lifo_initialization)
{
    LIFO_Buf_t LIFO_buf;
    LIFO_status status = LIFO_Init(&LIFO_buf, buffer1, MAX_LIFO_WIDTH);
    EXPECT_EQ(status, LIFO_no_error);
}