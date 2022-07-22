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

	int row, col;							// Declare two variables of type int as row and col
	int **arr;								// Declare a pointer of type int as arr

	printf("Enter row and colomn of matrix: ");	// Prints "Enter row and colomn of matrix: " on the console
	scanf("%d %d",&row, &col);					// Reads two integers from the console and stores them in row and col
	arr =(int **)malloc(sizeof(int)*col*row);	// Allocate memory for col*row elements of type int and store it in arr
	printf("Enter elements of the matrix\n");	// Prints "Enter elements of the matrix\n" on the console
	for(int i = 0; i<row; i++){					// Loop row times
		for(int j = 0; j<col; j++){				// Loop col times
			printf("Enter element a%d%d: ",i+1,j+1);	// Prints "Enter element ai+1j+1: " on the console
			scanf("%d",&arr[i][j]);				// Reads an integer from the console and stores it in arr[i][j]
		}
	}
	printf("Entered Matrix\n");					// Prints "Entered Matrix\n" on the console
	for(int i = 0; i<row; i++){					// Loop row times
		for(int j = 0; j<col; j++){				// Loop col times
			printf("%d ",arr[i][j]);			// Prints arr[i][j] on the console
		}
		printf("\n");							// Prints a new line on the console
	}
	printf("Transposed Matrix\n");				// Prints "Transposed Matrix\n" on the console
	for(int j = 0; j<col; j++){					// Loop col times
		for(int i = 0; i<row; i++){				// Loop row times
			printf("%d ",arr[i][j]);			// Prints arr[i][j] on the console
		}
		printf("\n");							// Prints a new line on the console
	}
    return 0;
}
