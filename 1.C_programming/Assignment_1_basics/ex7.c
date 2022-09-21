/**
 * @file ex7.c
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
    int a, b;                               // Declare two variables of type int
    // getting the input
    printf("Enter value of a: ");           // Prints "Enter value of a: " on the console
    scanf("%d", &a);                        // Reads an integer from the console and stores it in a
    printf("Enter value of b: ");           // Prints "Enter value of b: " on the console
    scanf("%d", &b);                        // Reads an integer from the console and stores it in b

    // swapping the values
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;


    // printing
    printf("After swapping, value of a = %d\n", a); // Prints "After swapping, value of a = " followed by the value of a
    printf("After swapping, value of b = %d", b);   // Prints "After swapping, value of b = " followed by the value of b
    return 0;
}
