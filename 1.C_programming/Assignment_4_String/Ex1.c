/**
 * @file Ex1.c
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
	int count=0;							// Declare a variable of type int as count
	printf("Enter a string: ");				// Prints "Enter a string: " on the console
	gets(s);								// Reads a string from the console and stores it in s
	printf("Enter a character to find a frequency: ");	// Prints "Enter a character to find a frequency: " on the console
	c = getchar();							// Reads a character from the console and stores it in c
	
	for(int i = 0; i<strlen(s); i++){		// Loop strlen(s) times
		if(s[i] == c) count++;				// If s[i] is equal to c, increment count
	}	
	printf("Frequency of %c = %d\n",c,count);	// Prints "Frequency of c = count" on the console

    return 0;
}
