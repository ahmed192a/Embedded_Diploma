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


typedef struct {
	char name[20];						// Declare a variable of type char as name
	int roll;							// Declare a variable of type int as roll
	float marks;						// Declare a variable of type float as marks
}student;						// Declare a struct as student


int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);		// Disable buffering for stdout
	setvbuf(stderr, NULL, _IONBF, 0);		// Disable buffering for stderr

	student s1;								// Declare a variable of type student as s1
	printf("Enter information for student :\n\n");	// Prints "Enter information for student :" on the console

	printf("Enter name : ");				// Prints "Enter name : " on the console
	scanf("%s", s1.name);					// Reads a string from the console and stores it in s1.name

	printf("Enter roll number : ");			// Prints "Enter roll number : " on the console
	scanf("%d", &s1.roll);					// Reads an integer from the console and stores it in s1.roll

	printf("Enter marks : ");				// Prints "Enter marks : " on the console
	scanf("%f", &s1.marks);					// Reads a float from the console and stores it in s1.marks

	printf("Display information :\n");		// Prints "Display information :" on the console
	printf("name: %s", s1.name);			// Prints "name: " followed by s1.name on the console
	printf("\t roll: %d", s1.roll);			// Prints "\t roll: " followed by s1.roll on the console
	printf("\t marks: %f", s1.marks);		// Prints "\t marks: " followed by s1.marks on the console
    return 0;
}
