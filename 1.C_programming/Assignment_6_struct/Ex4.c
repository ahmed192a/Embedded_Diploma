/**
 * @file Ex4.c
 * @author Ahmed Moahmed (ahmed.moahmed.eng.25@gmail.com)
 * @brief 
 * @version 0.1
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#define S_NUM 10
typedef struct {
	char name[20];
	int roll;
	float marks;
}student;			// Declare a struct as student

/**
 * @brief Main code entry point
 * 
 * @return int 
 */
int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);		// Disable buffering for stdout
	setvbuf(stderr, NULL, _IONBF, 0);		// Disable buffering for stderr

	student s[S_NUM];						// Declare an array of type student as s
	printf("Enter information for students :\n");	// Prints "Enter information for students :" on the console

	for(int i  = 0; i<S_NUM; i++){			// Loop from 0 to S_NUM-1
		printf("\nFor roll number %d\n", i+1);	// Prints "For roll number " followed by i+1 on the console
		s[i].roll = i+1;					// Assign i+1 to s[i].roll

		printf("Enter name : ");			// Prints "Enter name : " on the console
		scanf("%s", s[i].name);				// Reads a string from the console and stores it in s[i].name

		printf("Enter marks : ");			// Prints "Enter marks : " on the console
		scanf("%f", &s[i].marks);			// Reads a float from the console and stores it in s[i].marks
	}


	printf("\nDisplay information of students :\n");	// Prints "Display information of students :" on the console
	for(int i  = 0; i<S_NUM; i++){			// Loop from 0 to S_NUM-1
		printf("\nInformation for roll number %d", s[i].roll);	// Prints "Information for roll number " followed by s[i].roll on the console
		printf("\n name: %s", s[i].name);	// Prints " name: " followed by s[i].name on the console
		printf("\n marks: %0.3f", s[i].marks);	// Prints " marks: " followed by s[i].marks on the console
	}


    return 0;
}
