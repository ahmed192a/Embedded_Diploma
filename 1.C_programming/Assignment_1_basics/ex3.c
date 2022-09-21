/**
 * @file ex3.c
 * @author Ahmed Moahmed (ahmed.moahmed.eng.25@gmail.com)
 * @brief 
 * @version 0.1
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

/**
 * @brief  Main code entry point
 * 
 * @return int 
 */
int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);       // Disable buffering for stdout
	setvbuf(stderr, NULL, _IONBF, 0);       // Disable buffering for stderr
    int num_1, num_2;                       // Declare two variables of type int
    printf("Enter two integers: ");         // Prints "Enter two integers: " on the console
    scanf("%d %d", &num_1, &num_2);         // Reads two integers from the console and stores them in num_1 and num_2
    printf("Sum: %d", num_1 + num_2);       // Prints "Sum: " followed by the sum of num_1 and num_2
    
    return 0;
}
