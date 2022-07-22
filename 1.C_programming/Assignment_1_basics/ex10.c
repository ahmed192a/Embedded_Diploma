/**
 * @file ex10.c
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
    float num0, num1, num2, max;            // Declare four variables of type float
    printf("Entre three numbers: ");        // Prints "Entre three numbers: " on the console
    scanf("%f %f %f", &num0, &num1, &num2); // Reads three floats from the console and stores them in num0, num1 and num2
    if(num0 > num1){                        // If num0 is greater than num1
        if(num0 > num2)                     // If num0 is greater than num2
            max = num0;                     // Assign num0 to max
        else                                // If num0 is not greater than num2
            max = num2;                     // Assign num2 to max
    } else{                                 // If num0 is not greater than num1
        if(num1 > num2)                     // If num1 is greater than num2
            max = num1;                     // Assign num1 to max
        else                                // If num1 is not greater than num2
            max = num2;                     // Assign num2 to max
    } 
    printf("largest number = %g", max);     // Prints "largest number = " followed by the largest number
    return 0;
}