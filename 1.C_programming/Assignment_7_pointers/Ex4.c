/**
 * @file Ex4.c
 * @author Ahmed Moahmed (ahmed.moahmed.eng.25@gmail.com)
 * @brief 
 * @version 0.1
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

/**
 * @brief 
 * 
 * @return int 
 */
int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);			// Disable buffering for stdout
	setvbuf(stderr, NULL, _IONBF, 0);			// Disable buffering for stderr

	int arr[15];								// Declare a variable of type int as arr[15]
	int n;										// Declare a variable of type int as n
	// Prints "Input the number of elements to store in the array (max 15) : " on the console
	printf("Input the number of elements to store in the array (max 15) : ");	
	scanf("%d", &n);							// Reads an integer from the console and stores it in n
	// Prints "Input n number of elements in the array :" on the console
	printf("Input %d number of elements in the array :\n", n);		
	for(int i = 1; i <= n; i++){				// For loop from 1 to n
		printf("element - %d : ", i);			// Prints "element - i : " on the console
		scanf("%d", &arr[i]);					// Reads an integer from the console and stores it in arr[i]
	}

	printf("The elements of array in reverse order are :");	// Prints "The elements of array in reverse order are :" on the console

    for(int i = n; i >= 1; i--){				// For loop from n to 1
		printf("\nelement - %d : %d", i, arr[i]);	// Prints "element - i : arr[i]" on the console
	}

    return 0;
}
