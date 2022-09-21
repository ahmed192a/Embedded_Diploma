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
	char r[20];								// Declare a variable of type char as r
	int l;									// Declare a variable of type int as l
	printf("Enter a string: ");				// Prints "Enter a string: " on the console
	gets(s);								// Reads a string from the console and stores it in s
	l = strlen(s)-1;						// Assigns the length of s to l

	for(int i = 0 ; i<=l; i++){				// Loop l times
		r[l-i] = s[i];						// Assigns s[i] to r[l-i]
	}
	r[l+1]='\0';							// Assigns NULL to r[l+1]

	printf("Reversed string = %s\n",r);		// Prints "Reversed string = r" on the console
    return 0;
}
