/**
 * @file Ex2.c
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

	setvbuf(stdout, NULL, _IONBF, 0);		// Disable buffering for stdout
	setvbuf(stderr, NULL, _IONBF, 0);		// Disable buffering for stderr

	char s[20];								// Declare a variable of type char as s
	int count=0;							// Declare a variable of type int as count
	printf("Enter a string: ");				// Prints "Enter a string: " on the console
	gets(s);								// Reads a string from the console and stores it in s
	for( ; s[count]; count++);					// Loop until s[count] is not equal to NULL
	printf("Length of string = %d\n",count);	// Prints "Length of string = count" on the console
    return 0;
}
