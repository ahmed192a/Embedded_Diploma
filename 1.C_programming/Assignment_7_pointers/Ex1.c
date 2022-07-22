/**
 * @file Ex1.c
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
	setvbuf(stdout, NULL, _IONBF, 0);	// Disable buffering for stdout
	setvbuf(stderr, NULL, _IONBF, 0);	// Disable buffering for stderr

	int m = 29;							// Declare a variable of type int as m
	int *ab = &m;						// Declare a variable of type int as ab

	printf("Address of m : %p\n", &m);	// Prints "Address of m : ab" on the console
	printf("Value of m : %d\n",m);		// Prints "Value of m : m" on the console

	printf("\nNow ab is assigned with the address of m.\n");	// Prints "Now ab is assigned with the address of m." on the console

	printf("Address of pointer ab : %p\n", ab);			// Prints "Address of pointer ab : ab" on the console
	printf("Content of pointer ab : %d\n", *ab);		// Prints "Content of pointer ab : m" on the console

	m = 34;								// Assigns 34 to m
	printf("\nThe value of m assigned to 34 now.\n");	// Prints "The value of m assigned to 34 now." on the console

	printf("Address of pointer ab : %p\n", ab);			// Prints "Address of pointer ab : ab" on the console
	printf("Content of pointer ab : %d\n", *ab);		// Prints "Content of pointer ab : 34" on the console


	*ab = 7;							// Assigns 7 to *ab
	// Prints "The pointer variable ab is assigned with the value 7 now." on the console
	printf("\nThe pointer variable ab is assigned with the value 7 now.\n");	
	printf("Address of m : %p\n", &m);		// Prints "Address of m : ab" on the console
	printf("Value of m : %d\n",m);			// Prints "Value of m : 7" on the console


    return 0;
}
