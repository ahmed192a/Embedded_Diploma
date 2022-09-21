/**
 * @file ex12.c
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
    printf("Enter a character : ");             // Prints "Enter a character : " on the console
    scanf("%c", &c);                            // Reads a character from the console and stores it in c
    if((c>= 'a' && c<= 'z') || (c >= 'A' && c <= 'Z')){ // If c is a letter
        printf("%c is an alphabet", c);         // Prints "c is an alphabet" on the console
    }
    else{                                       // If c is not a letter
        printf("%c is not an alphabet", c);     // Prints "c is not an alphabet" on the console
    }   

    return 0;
}
