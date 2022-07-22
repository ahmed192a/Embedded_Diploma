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

	char a = 'A';							// Declare a variable of type char as a
	char *ptr = &a;							// Declare a variable of type char pointer as ptr

	printf("The Alphabets are: \n");		// Prints "The Alphabets are: " on the console

	for(; *ptr<= 'Z'; (*ptr)++) printf("%c ",*ptr);	// Prints the alphabets from A to Z on the console

    return 0;
}
