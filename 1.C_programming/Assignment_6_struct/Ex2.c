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

typedef struct {
	int feet;
	float inch;
}distance;			//distance is a structure


/**
 * @brief Main code entry point
 * 
 * @return int 
 */
int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);		// Disable buffering for stdout
	setvbuf(stderr, NULL, _IONBF, 0);		// Disable buffering for stderr

	distance d1, d2, d3;					// Declare three variables of type distance
	printf("Enter information for 1st distance\n");	// Prints "Enter information for 1st distance" on the console
	printf("Enter feet: ");					// Prints "Enter feet: " on the console
	scanf("%d", &d1.feet);					// Reads an integer from the console and stores it in d1.feet
	printf("Enter inch: ");					// Prints "Enter inch: " on the console
	scanf("%f", &d1.inch);					// Reads a float from the console and stores it in d1.inch

	printf("Enter information for 2st distance\n");	// Prints "Enter information for 2st distance" on the console
	printf("Enter feet: ");					// Prints "Enter feet: " on the console
	scanf("%d", &d2.feet);					// Reads an integer from the console and stores it in d2.feet
	printf("Enter inch: ");					// Prints "Enter inch: " on the console
	scanf("%f", &d2.inch);					// Reads a float from the console and stores it in d2.inch

	d3.inch = d1.inch + d2.inch;			// d3.inch is equal to d1.inch plus d2.inch
	d3.feet = d1.feet + d2.feet + d3.inch/10;	// d3.feet is equal to d1.feet plus d2.feet plus d3.inch divided by 10
	int k=(int)(d3.inch/10);				// k is equal to d3.inch divided by 10
	d3.inch = d3.inch-k*10;					// d3.inch is equal to d3.inch minus k*10
	// Prints "Sum of distances : " followed by d3.feet followed by "'" followed by d3.inch followed by "\"" on the console
	printf("Sum of distances : %d' %0.2f\"", d3.feet, d3.inch);	

    return 0;
}
