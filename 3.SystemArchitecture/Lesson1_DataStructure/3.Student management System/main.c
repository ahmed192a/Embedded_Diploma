/**
 * @file main.c
 * @author Ahmed Mohamed (ahmed.mohamed.eng.25@gmail.com)
 * @brief Student Management System
 * @version 0.1
 * @date 2022-11-14 @ 15:11:60
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include "LogicSystem.h"
int main(void) {
	int choice;
	DPRINTF("\tWelcome to Student Management System \n");
	while(1){
		DPRINTF("\t\tChoode the task that you want to perform\n");
		DPRINTF("1: Add the Student Details Manually\n");
		DPRINTF("2: Add the Student Details from text file\n");
		DPRINTF("3:Find the student Details by Roll number\n");
		DPRINTF("4:Find the student Details by First Name\n");
		DPRINTF("5:Find the student Details by Course id\n");
		DPRINTF("6:Find the Total number of Students\n");
		DPRINTF("7:Update the student Details by Roll number\n");
		DPRINTF("8:Delete the student Details by Roll number\n");
		DPRINTF("9:Show all information\n");
		DPRINTF("10:exit\n");
		DPRINTF("-----------------\n");
		DPRINTF("Enter your choice to perform the task: ");
		scanf("%d", &choice);
		DPRINTF("\n");
		switch(choice){
		case 1:
			add_student_manually();

			break;
		case 2:
			add_student_file();
			break;
		case 3:
			find_rl(); // by Roll Number
			break;
		case 4:
			find_fn(); // by first name
			break;
		case 5:
			find_c(); // by course id
			break;
		case 6:
			tot_s();
			break;
		case 7:
			del_s();
			break;
		case 8:
			up_s();
			break;
		case 9:
			print_all_students();
			break;
		case 10:
			exit(0);
			break;
		default:
			DPRINTF("\t\"WRONG OPTION PLEASE TRY AGAIN\"\n");
			break;
		}
	}
	return 0;
}
