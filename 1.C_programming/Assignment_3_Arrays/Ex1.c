/**
 * @file Ex1.c
 * @author Ahmed Moahmed (ahmed.moahmed.eng.25@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-22
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

	setvbuf(stdout, NULL, _IONBF, 0);			// Disable buffering for stdout
	setvbuf(stderr, NULL, _IONBF, 0);			// Disable buffering for stderr

	float Arr_1[2][2];							// Declare a 2D array of type float as first array
	float Arr_2[2][2];							// Declare a 2D array of type float as second array
	float sum[2][2];							// Declare a two dimensional array of type float as result array

	printf("Enter the element of 1st matrix\n");	// Prints "Enter the element of 1st matrix" on the console
	// scan all elements of first array
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("Enter A%d%d: ", i + 1, j + 1);		// Prints "Enter Ai,j: " on the console
			scanf("%f", &Arr_1[i][j]);					// Reads a float from the console and stores it in Arr_1[i][j]
		}
	}


	printf("Enter the element of 2nd matrix\n");	// Prints "Enter the element of 2nd matrix" on the console
	// scan all elements of second array
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("Enter B%d%d: ", i + 1, j + 1);		// Prints "Enter Bi,j: " on the console
			scanf("%f", &Arr_2[i][j]);					// Reads a float from the console and stores it in Arr_2[i][j]
		}
	}

	// calculate sum of two arrays
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			sum[i][j] = Arr_1[i][j] + Arr_2[i][j];			// Assign Arr_1[i][j] + Arr_2[i][j] to sum[i][j]
		}
	}


	printf("Sum Of Matrix:\n");					// Prints "Sum Of Matrix:" on the console
	// print all elements of sum array
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%f ", sum[i][j]);				// Prints sum[i][j] on the console
		}
		printf("\n");								// Prints a new line on the console
	}


    return 0;
}
