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

	int n, element;							// Declare two variables of type int
	int *arr;								// Declare a pointer of type int as arr

	printf("Enter number of elements : ");	// Prints "Enter number of elements : " on the console
	scanf("%d",&n);							// Reads an integer from the console and stores it in n
	arr  = (int *)malloc((n) * sizeof(int));// Allocate memory for n elements of type int and store it in arr

	for(int i = 0; i < n; i++){				// Loop n times
		scanf("%d", &arr[i]);				// Reads an integer from the console and stores it in arr[i]
	}

	printf("Enter the element to be searched : ");	// Prints "Enter the element to be searched : " on the console
	scanf("%d", &element);					// Reads an integer from the console and stores it in element

	for(int i = 0; i < n; i++){				// Loop n times
		if(arr[i] == element){				// If arr[i] is equal to element
			printf("Number found at location = %d", i);	// Prints "Number found at location = i" on the console
			return 0;
		}
	}
	printf("Number is not in the array");	// Prints "Number is not in the array" on the console


    return 0;
}
