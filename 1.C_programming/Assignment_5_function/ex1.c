/**
 * @file ex1.c
 * @author Ahmed Moahmed (ahmed.moahmed.eng.25@gmail.com)
 * @brief 
 * @version 0.1
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/**
 * @brief Main code entry point
 * 
 * @param n1 
 * @param n2 
 */
void myfunc(int n1, int n2){

	int flag  = 0;				// Declare a variable of type int as flag
	for(int i = n1;i<=n2;i++){	// Loop n1 times
		flag = 0;				// Assigns 0 to flag

		for(int j = 2; j<=i/2;j++){	// Loop j times
			if(i%j == 0) {		// If i is divisible by j
				flag =1;		// Assigns 1 to flag
				break;
			}
		}
		if(flag == 0) {			// If flag is 0
			printf("%d ",i);	// Prints i on the console
		}
	}

}

/**
 * @brief Main code entry point
 * 
 * @return int 
 */
int main() {
	setvbuf(stdout, NULL, _IONBF, 0);	// Disable buffering for stdout
	setvbuf(stderr, NULL, _IONBF, 0);	// Disable buffering for stderr
	int n1, n2;							// Declare a variable of type int as n1 and n2
	printf("n1=");						// Prints "n1=" on the console
	scanf("%d", &n1);					// Reads an integer from the console and stores it in n1
	printf("n2=");						// Prints "n2=" on the console
	scanf("%d", &n2);					// Reads an integer from the console and stores it in n2
	myfunc(n1,n2);						// Calls myfunc function
	return 0;
}
