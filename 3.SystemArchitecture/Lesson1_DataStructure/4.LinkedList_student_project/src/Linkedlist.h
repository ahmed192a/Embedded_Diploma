/**
 * @file Linkedlist.h
 * @author Ahmed Mohamed (ahmed.mohamed.eng.25@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-14 @ 15:11:90
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "conio.h"

// macros
#define DPRINTF(...) { fflush(stdout);\
		fflush(stdin);\
		printf(__VA_ARGS__);\
		fflush(stdout);\
		fflush(stdin);}

//Effective data
struct Sdata{
	int ID;
	char name[40];
	float height;
};
//Linked-list node
struct SStudent{
	struct Sdata student;
	struct SStudent * PNextStudent;

};


void AddStudent();
void Delete_student();
void view_Students();
void Delete_All();
void Nth_Node();
void Dict_size();
int list_length(struct SStudent *PCurrentStudent);
void Nth_Node_end();
void middle_student();
void Reverse_list();


#endif /* LINKEDLIST_H_ */
