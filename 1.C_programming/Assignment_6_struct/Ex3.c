/**
 * @file Ex3.c
 * @author Ahmed Moahmed (ahmed.moahmed.eng.25@gmail.com)
 * @brief 
 * @version 0.1
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

typedef struct {
	float real;
	float img;
}comp;				// Declare a struct as comp

/**
 * @brief Main code entry point
 * 
 * @return int 
 */
int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);		// Disable buffering for stdout
	setvbuf(stderr, NULL, _IONBF, 0);		// Disable buffering for stderr

	comp d1, d2, d3;						// Declare 3 variables of type comp as d1, d2, d3

	printf("for 1st complex number\n");		// Prints "for 1st complex number" on the console
	printf("Enter real and imaginary respectively: ");	// Prints "Enter real and imaginary respectively: " on the console
	scanf("%f %f", &d1.real , &d1.img);		// Reads two floats from the console and stores them in d1.real and d1.img

	printf("\n\nfor 2st complex number\n");	// Prints "\n\nfor 2st complex number" on the console
	printf("Enter real and imaginary respectively: ");	// Prints "Enter real and imaginary respectively: " on the console
	scanf("%f %f", &d2.real , &d2.img);		// Reads two floats from the console and stores them in d2.real and d2.img


	d3.real = d1.real + d2.real;			// d3.real is equal to d1.real plus d2.real
	d3.img = d1.img + d2.img ;				// d3.img is equal to d1.img plus d2.img
	printf("\nSum=%0.2f+%0.2fi\n", d3.real, d3.img);		// Prints "Sum=d3.real+d3.imgi" on the console

    return 0;
}
