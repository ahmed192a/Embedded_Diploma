/**
 * @file ex15.c
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
    char c;                                     // Declare a variable of type char
    float num1, num2, result;                   // Declare a variable of type float
    // Prints "Enter operator either + or - or * or divide : " on the console
    printf("Enter operator either + or - or * or divide : ");          
    scanf("%c", &c);                            // Reads a character from the console and stores it in c
    printf("Enter two operands: ");             // Prints "Enter two operands: " on the console
    scanf("%f %f", &num1, &num2);               // Reads two floats from the console and stores them in num1 and num2
    switch(c){                                  // Switch on c
        case '+':                               // If c is +
            result = num1 + num2;               // Assign num1 + num2 to result
            break;                              
        case '-':                               // If c is -
            result = num1 - num2;               // Assign num1 - num2 to result
            break;      
        case '*':                               // If c is *
            result = num1 * num2;               // Assign num1 * num2 to result
            break;      
        case '/':                               // If c is /
            result = num1 / num2;               // Assign num1 / num2 to result
            break;
        default:
            printf("not valid operator");       // Prints "not valid operator" on the console
            return 0;
            break;

    }
    printf("%g %c %g = %g", num1, c, num2, result); // Prints num1 c num2 = result on the console

    return 0;
}
