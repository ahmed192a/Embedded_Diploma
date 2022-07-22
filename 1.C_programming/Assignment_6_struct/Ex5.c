/**
 * @file Ex5.c
 * @author Ahmed Moahmed (ahmed.moahmed.eng.25@gmail.com)
 * @brief 
 * @version 0.1
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <math.h>
#define AREA(x) (3.14*x*x)

/**
 * @brief Main code entry point
 * 
 * @return int 
 */
int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);		// Disable buffering for stdout
	setvbuf(stderr, NULL, _IONBF, 0);		// Disable buffering for stderr
	int r;									// Declare a variable of type int as r
	float area;								// Declare a variable of type float as area
	printf("Enter radius : ");				// Prints "Enter radius : " on the console
	scanf("%d",&r);							// Reads an integer from the console and stores it in r
	area = AREA(r);							// Assigns AREA(r) to area
	printf("Area= %0.3f", area);			// Prints "Area= area" on the console


    return 0;
}
