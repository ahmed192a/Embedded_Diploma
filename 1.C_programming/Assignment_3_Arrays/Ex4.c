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
#include <stdlib.h>

/**
 * @brief Main code entry point
 * 
 * @return int 
 */
int main()
{

	setvbuf(stdout, NULL, _IONBF, 0);			// Disable buffering for stdout
	setvbuf(stderr, NULL, _IONBF, 0);			// Disable buffering for stderr

	int n, element, pos;						// Declare three variables of type int
	int *arr, tmp;								// Declare a pointer of type int as arr and a variable of type int as tmp

	printf("Enter number of elements : ");		// Prints "Enter number of elements : " on the console
	scanf("%d",&n);								// Reads an integer from the console and stores it in n
	arr  = (int *)malloc((n+1) * sizeof(int));	// Allocate memory for (n+1) elements of type int and store it in arr

	for(int i = 0; i < n; i++){					// Loop n times
		scanf("%d", &arr[i]);					// Reads an integer from the console and stores it in arr[i]
	}

	printf("Enter the element to be inserted : ");	// Prints "Enter the element to be inserted : " on the console
	scanf("%d", &element);						// Reads an integer from the console and stores it in element
	printf("Enter the location : ");			// Prints "Enter the location : " on the console
	scanf("%d", &pos);							// Reads an integer from the console and stores it in pos

	for(int i = pos; i < n+1; i++){				// Loop n times
		tmp = arr[i];							// Assign arr[i] to tmp
		arr[i] = element;						// Assign element to arr[i]
		element = tmp;							// Assign tmp to element
	}	

	for(int i = 0; i < n+1; i++){				// Loop n times
		printf("%d ",arr[i]);					// Prints arr[i] on the console
	}

    return 0;
}
