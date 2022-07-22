/**
 * @file ex5.c
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
    char c ;                                // Declare a variable of type char
    printf("Enter a character: ");          // Prints "Enter a character: " on the console
    scanf("%c",&c);                         // Reads a character from the console and stores it in c
    printf("ASCII value of %c = %d", c, c); // Prints "ASCII value of " followed by the character c and its ASCII value
    return 0;
}
