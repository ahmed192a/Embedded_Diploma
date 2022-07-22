/**
 * @file ex11.c
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
    float num0;                             // Declare a variable of type float
    printf("Entre a number: ");             // Prints "Entre a number: " on the console
    scanf("%f", &num0);                     // Reads a float from the console and stores it in num0
    if(num0 > 0){                           // If num0 is greater than 0
        printf("%g is positive.", num0);    // Prints "num0 is positive." if num0 is greater than 0
    }
    else if(num0 < 0){                      // If num0 is less than 0
        printf("%g is negative.", num0);    // Prints "num0 is negative." if num0 is less than 0
    }
    else{                                   // If num0 is equal to 0
        printf("you entered zero");         // Prints "you entered zero"
    }
    return 0;
}
