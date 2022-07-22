/**
 * @file ex6.c
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
    float a, b, tmp;                        // Declare three variables of type float
    // getting the input
    printf("Enter value of a: ");           // Prints "Enter value of a: " on the console
    scanf("%f", &a);                        // Reads a float from the console and stores it in a
    printf("Enter value of b: ");           // Prints "Enter value of b: " on the console
    scanf("%f", &b);                        // Reads a float from the console and stores it in b
    
    // swapping the values
    tmp = a;
    a = b;
    b = tmp;
    
    // printing
    printf("After swapping, value of a = %g\n", a); // Prints "After swapping, value of a = " followed by the value of a
    printf("After swapping, value of b = %g", b);   // Prints "After swapping, value of b = " followed by the value of b
    return 0;
}