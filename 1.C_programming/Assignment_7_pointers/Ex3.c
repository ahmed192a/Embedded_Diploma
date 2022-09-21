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
#include <string.h>
/**
 * @brief Main code entry point
 * 
 * @return int 
 */
int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);		// Disable buffering for stdout
	setvbuf(stderr, NULL, _IONBF, 0);		// Disable buffering for stderr

	char s[20];								// Declare a variable of type char as s
	char c;									// Declare a variable of type char as c
	printf("Input a string : ");			// Prints "Input a string : " on the console
	gets(s);								// Reads a string from the console and stores it in s
	char *f = &s[strlen(s) -1];				// Declare a variable of type char pointer as f
	for(int i = 0; i < strlen(s)/2; i++,f--){	// For loop from 0 to strlen(s)/2
		c = *f;								// Assigns the value of f to c
		*f = s[i];							// Assigns the value of s[i] to f
		s[i] = c;							// Assigns the value of c to s[i]
	}
	printf("%s", s);						// Prints s on the console


    return 0;
}
