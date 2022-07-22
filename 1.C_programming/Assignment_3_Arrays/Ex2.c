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
#include <stdlib.h>

/**
 * @brief Main code entry point
 * 
 * @return int 
 */
int main()
{

	setvbuf(stdout, NULL, _IONBF, 0);		// Disable buffering for stdout
	setvbuf(stderr, NULL, _IONBF, 0);		// Disable buffering for stderr

	int num, i;								// Declare two variables of type int
	float avg = 0;							// Declare a variable of type float and initialize it to 0
	float *arr;								// Declare a pointer of type float
	scanf("%d",&num);						// Reads an integer from the console and stores it in num
	arr = (float *)malloc(num * sizeof(float));	// Allocate memory for num elements of type float and store it in arr
	for(i = 0; i<num; i++){					// Loop num times
		printf("%d. Enter number: ",i);		// Prints "i. Enter number: " on the console
		scanf("%f", &arr[i]);				// Reads a float from the console and stores it in arr[i]
		avg += arr[i]/num;					// Assign arr[i]/num to avg
	}

	printf("Average = %f",avg);				// Prints "Average = avg" on the console

	free(arr);								// Free the memory allocated to arr
    return 0;
}
