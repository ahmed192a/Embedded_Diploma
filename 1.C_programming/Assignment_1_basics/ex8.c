/**
 * @file ex8.c
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
	setvbuf(stdout, NULL, _IONBF, 0);           // Disable buffering for stdout
	setvbuf(stderr, NULL, _IONBF, 0);           // Disable buffering for stderr
    int num;                                    // Declare a variable of type int
    printf ("Enter an integer you want to check: ");  // Prints "Enter an integer you want to check: " on the console
    scanf("%d", &num);                          // Reads an integer from the console and stores it in num
    if(num%2 == 0){                             // If num is even
        printf ("%d is even", num);             // Prints "num is even" if num is even
    }       
    else{                                       // If num is odd
        printf ("%d is odd", num);              // Prints "num is odd" if num is odd
    }
    return 0;
}
