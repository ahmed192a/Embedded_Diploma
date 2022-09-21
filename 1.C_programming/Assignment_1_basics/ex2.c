/**
 * @file ex2.c
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
    int num;                        // Declare an integer variable named num
    printf("Enter a integer: ");    // Prompt the user to enter an integer
    fflush(stdout);                 // Flush the output buffer
    scanf("%d", &num);              // Read an integer from the console and store it in the variable num
    fflush(stdin);                  // Flush the input buffer
    printf("You entered: %d", num); // Print the value of the variable num on the console
    return 0;
}
