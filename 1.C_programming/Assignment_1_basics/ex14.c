/**
 * @file ex14.c
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
 * @return int 
 */
int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);       // Disable buffering for stdout
	setvbuf(stderr, NULL, _IONBF, 0);       // Disable buffering for stderr
    int num, sum=1;                         // Declare a variable of type int
    printf("Enter an integer : ");          // Prints "Enter an integer : " on the console
    scanf("%d", &num);                      // Reads an integer from the console and stores it in num
    while(num <0){                             // while num is less than 0
        printf("ERROR!!! Factorial of negative number doesn't exist.");
        printf("Enter an integer : ");          // Prints "Enter an integer : " on the console
        scanf("%d", &num);                      // Reads an integer from the console and stores it in num
    }
    
    for( int i = 1; i <= num; i++){         // For each integer from 1 to num
        sum *= i;                           // Multiply i to sum
    }
    printf("Sum = %d", sum);                // Prints "Sum = " followed by the sum
    
    return 0;
}
