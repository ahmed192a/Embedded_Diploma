/**
 * @file Ex6.c
 * @author Ahmed Moahmed (ahmed.moahmed.eng.25@gmail.com)
 * @brief 
 * @version 0.1
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

union job{
	char name[32];
	float salary;
	int worker_no;
}u;						// Declare a union as u

struct job1{
	char name [32];
	float salary;
	int worker_no;
}s;						// Declare a struct as s

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);		// Disable buffering for stdout
	setvbuf(stderr, NULL, _IONBF, 0);		// Disable buffering for stderr

	printf("size of union = %d", sizeof(u));		// Prints "size of union = 32" on the console
	printf("\nsize of structure = %d", sizeof(s));	// Prints "size of structure = 32" on the console
    
    return 0;
}

// output
/*
size of union =  32
size of structure = 40
*/