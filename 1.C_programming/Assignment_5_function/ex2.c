/**
 * @file ex2.c
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
 * @param c 
 */
void reverse(char *c){
	for(int i = strlen(c)-1; i>=0;i--){		// Loop i times
		printf("%c", c[i]);					// Prints c[i] on the console
	}
}

/**
 * @brief Main code entry point
 * 
 * @return int 
 */
int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);		// Disable buffering for stdout
	setvbuf(stderr, NULL, _IONBF, 0);		// Disable buffering for stderr
	char s[50];								// Declare a variable of type char as s
	printf("Enter string : ");				// Prints "Enter string : " on the console
	gets(s);								// Reads a string from the console and stores it in s
	reverse(s);								// Calls reverse function
    return 0;
}
