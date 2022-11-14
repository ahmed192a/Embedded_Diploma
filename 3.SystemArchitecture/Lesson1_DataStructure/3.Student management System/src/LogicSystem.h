/*
 * LogicSystem.h
 *
 *      Author: Ahmed
 */

#ifndef LOGICSYSTEM_H_
#define LOGICSYSTEM_H_

#include "stdio.h"

#define DPRINTF(...)	{fflush(stdout); \
		fflush(stdin); \
		printf(__VA_ARGS__); \
		fflush(stdout); \
		fflush(stdin);}

#define student_size 50
struct Student{
	char fname[20];
	char lname[20];
	int roll;
	float GPA;
	int cid[5];
};

struct Student StudentMemory[student_size]; // array of structure size 50 student

void add_student_file();
void add_student_manually();
void find_rl(); // by Roll Number
void find_fn(); // by first name
void find_c(); // by course id
void tot_s();
void del_s();
void up_s();
void print_all_students();

#endif /* LOGICSYSTEM_H_ */
