/**
 * @file main.c
 * @author Ahmed Mohamed (ahmed.mohamed.eng.25@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-14 @ 15:11:55
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "Linkedlist.h"



int main(){
	char temp[20];
	while(1){
		DPRINTF("\n==================");
		DPRINTF("\n Choose one of the following options:\n");
		DPRINTF("\n  1: Add student");
		DPRINTF("\n  2: Delete student");
		DPRINTF("\n  3: view students");
		DPRINTF("\n  4: Delete All");
		DPRINTF("\n  5: Nth Student ");
		DPRINTF("\n  6: size of dictionary ");
		DPRINTF("\n  7: Nth Student from end");
		DPRINTF("\n  8: Middle student ");
		DPRINTF("\n  9: Reverse database ");
		DPRINTF("\n  10: EXIT ");
		DPRINTF("\n  Enter option number : ");
		gets(temp);
		switch(atoi(temp)){
		case 1:
			AddStudent();
			break;
		case 2:
			Delete_student();
			break;
		case 3:
			view_Students();
			break;			
		case 4:
			Delete_All();
			break;			
		case 5:
			Nth_Node();
			break;
		case 6:
			Dict_size();
			break;
		case 7:
			Nth_Node_end();
			break;
		case 8:
			middle_student();
			break;
		case 9:
			Reverse_list();
			break;
		case 10:
			return 0;
			break;
		}

	}
	return 0;
}

