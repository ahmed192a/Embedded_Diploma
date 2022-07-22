/**
 * @file ex9.c
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
    char vowels[5] = {'a', 'e', 'o' , 'u', 'i'};// Declare a variable of type char and initialize it with the array of 5 vowels

    printf ("Enter an alphabet: ");             // Prints "Enter an alphabet: " on the console
    scanf("%c", &c);                            // Reads a character from the console and stores it in c
    if(c <97){                                  // If c is lowercase
        c += 32;                                // Convert c to uppercase
    }
    for(char i = 0; i<5; i++){                  // Loop through the array of 5 vowels
        if(c == vowels[i]){                     // If c is equal to the current vowel
            printf("%c is a vowel.", c);        // Prints "c is a vowel." on the console
            return 0;                           
        }
    }
    printf("%c is a constant.", c);             // Prints "c is a constant." on the console
    return 0;
}
