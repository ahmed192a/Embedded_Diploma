/**
 * @file ex4.c
 * @author Ahmed Moahmed (ahmed.moahmed.eng.25@gmail.com)
 * @brief 
 * @version 0.1
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
/**
 * @brief Main code entry point
 * 
 * @param x 
 * @param y 
 * @return int 
 */
int Pow(int x, int y){
	if(y==1) return x;					// If y is equal to 1, return x
	else return x*Pow(x,y-1);			// Else, return x*Pow(x,y-1)
}

/**
 * @brief Main code entry point
 * 
 * @return int 
 */
int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);	// Disable buffering for stdout
	setvbuf(stderr, NULL, _IONBF, 0);	// Disable buffering for stderr
	int num,pow;						// Declare a variable of type int as num and pow
	printf("Enter num : ");				// Prints "Enter num : " on the console
	scanf("%d", &num);					// Reads an integer from the console and stores it in num
	printf("Enter power num : ");		// Prints "Enter power num : " on the console
	scanf("%d", &pow);					// Reads an integer from the console and stores it in pow
	printf("%d ^ %d = %d", num, pow , Pow(num, pow));	// Prints num ^ pow = Pow(num, pow) on the console


    return 0;
}
