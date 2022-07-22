/**
 * @file ex4.c
 * @author Ahmed Moahmed (ahmed.moahmed.eng.25@gmail.com)
 * @brief 
 * @version 0.1
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

/**
 * @brief Main code entry point
 * 
 * @return int 
 */
int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);       // Disable buffering for stdout
	setvbuf(stderr, NULL, _IONBF, 0);       // Disable buffering for stderr
    float num_1, num_2, total;              // Declare three variables of type float
    printf("Enter two numbers: ");          // Prints "Enter two numbers: " on the console
    scanf("%f %f", &num_1, &num_2);         // Reads two floats from the console and stores them in num_1 and num_2
	total = num_1 * num_2;                  // Calculate the product of num_1 and num_2 and store it in total
    printf("Sum: %.6f", total);             // Prints "Sum: " followed by the sum of num_1 and num_2
    
    return 0;
}