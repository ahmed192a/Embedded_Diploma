/**
 * @file Linkedlist.c
 * @author Ahmed Mohamed (ahmed.mohamed.eng.25@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-14 @ 15:11:10
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#include "Linkedlist.h"

struct SStudent * PFirstStudent = NULL;

void AddStudent(){
	struct SStudent * PNewStudent ;
	struct SStudent * PLastStudent ;
	char temp[40];
	//check if list is empty
	if(PFirstStudent == NULL){
		//Add new Record
		PNewStudent =(struct SStudent *) malloc(sizeof(struct SStudent));
		//assign it to PFirstStudent
		PFirstStudent = PNewStudent;
	}
	else // list contains records
	{
		// navigate untill reach the last records
		PLastStudent = PFirstStudent;
		while(PLastStudent->PNextStudent)
			PLastStudent = PLastStudent->PNextStudent;
		PNewStudent =(struct SStudent *) malloc(sizeof(struct SStudent));
		PLastStudent->PNextStudent = PNewStudent;
	}
	// Fill New record
	DPRINTF("\n Enter the ID : ");
	gets(temp);
	PNewStudent->student.ID = atoi(temp);
	DPRINTF("\n Enter the Name : ");
	gets(PNewStudent->student.name);

	DPRINTF("\n Enter the height : ");
	gets(temp);
	PNewStudent->student.height = atof(temp);
	// Set the next pointer (new student) to null
	PNewStudent->PNextStudent = NULL;
}

void Delete_student(){
	int id;
	char temp[10];
	struct SStudent * PPrevStudent = NULL;
	struct SStudent * PLastStudent = NULL;
	//check if list is empty
	if(PFirstStudent == NULL){
		DPRINTF("\nData base is empty ..\n");
		return;
	}
	DPRINTF("\n Enter the ID : ");
	gets(temp);
	id = atoi(temp);
	PLastStudent = PFirstStudent;
	while(PLastStudent && PLastStudent->student.ID != id){
		PPrevStudent = PLastStudent;
		PLastStudent = PLastStudent->PNextStudent;
	}
	if(PLastStudent==NULL){
		DPRINTF("ID %d isn't found", id);
		return;
	}
	else if(PLastStudent->student.ID == id){
		if(PPrevStudent){
			PPrevStudent->PNextStudent = PLastStudent->PNextStudent;
		}
		else{
			PFirstStudent = PLastStudent->PNextStudent;
		}
		free (PLastStudent);
	}
}

void view_Students(){
	struct SStudent* PCurrentStudent ;
	PCurrentStudent = PFirstStudent;
	int count = 0;
	if(PFirstStudent == NULL){
		DPRINTF("\n Database is empty\n");
	}
	else{
		while(PCurrentStudent){
			DPRINTF("\n record number %d ", count);
			DPRINTF("\n\t student id : %d", PCurrentStudent->student.ID );
			DPRINTF("\n\t student name : %s", PCurrentStudent->student.name );
			DPRINTF("\n\t student height : %f", PCurrentStudent->student.height );
			PCurrentStudent = PCurrentStudent->PNextStudent;
			count++;
		}
	}
}

void Delete_All(){
	struct SStudent *PCurrentStudent = PFirstStudent;
	struct SStudent * PPrevStudent = NULL;

	if(PFirstStudent == NULL){
		DPRINTF("\n Database is empty\n");
	}else{
		while(PCurrentStudent){
			PPrevStudent = PCurrentStudent;
			PCurrentStudent = PCurrentStudent->PNextStudent;
			free(PPrevStudent);
		}
		PFirstStudent = NULL;
	}
}

void Nth_Node(){
	struct SStudent *PCurrentStudent = PFirstStudent;
	char temp[20];
	int n;

	DPRINTF("\nEnter the number of the requested node : ");
	gets(temp);
	n = atoi(temp);
	n--;
	if(PFirstStudent == NULL){
		DPRINTF("\n Database is empty");
	}else{
		while(n!=0 &&  PCurrentStudent){
			PCurrentStudent = PCurrentStudent->PNextStudent;
			n--;
		}
		if(PCurrentStudent){
			DPRINTF("\n\t student id : %d", PCurrentStudent->student.ID );
			DPRINTF("\n\t student name : %s", PCurrentStudent->student.name );
			DPRINTF("\n\t student height : %f", PCurrentStudent->student.height );
		}
		else{
			DPRINTF("\n\t record dosen't exist ");
		}
	}
}


void Dict_size(){
	DPRINTF("\n====================================\n");
	DPRINTF("There are %d records in the database", list_length(PFirstStudent));
	DPRINTF("\n====================================\n");
}

int list_length(struct SStudent *PCurrentStudent){
	if(!PCurrentStudent){
		return 0;
	}
	return 1 + list_length(PCurrentStudent->PNextStudent);
}


void Nth_Node_end(){
	struct SStudent * PLastStudent = PFirstStudent;
	struct SStudent * PCurrentStudent = PFirstStudent;
	char  temp[20];
	int count =1;
	//check if list is empty
	if(PFirstStudent == NULL){
		DPRINTF("\nData base is empty ..\n");
		return;
	}
	DPRINTF("\nEnter the number of the student from the last of database: ");
	gets(temp);
	while(PLastStudent->PNextStudent){
		if(count == atoi(temp)){
			PLastStudent=PLastStudent->PNextStudent;
			PCurrentStudent = PCurrentStudent->PNextStudent;
		}else{
			count++;
			PLastStudent=PLastStudent->PNextStudent;
		}
	}
	if(count == atoi(temp)){
		DPRINTF("\n\t student id : %d", PCurrentStudent->student.ID );
		DPRINTF("\n\t student name : %s", PCurrentStudent->student.name );
		DPRINTF("\n\t student height : %f", PCurrentStudent->student.height );
	}
	else{
		DPRINTF("\n\t record dosen't exist ");
	}
}
void middle_student(){
	struct SStudent * PMidStudent = PFirstStudent;
	struct SStudent * PCurrentStudent = PFirstStudent;
	//check if list is empty
	if(PFirstStudent == NULL){
		DPRINTF("\nData base is empty ..\n");
		return;
	}
	while(PCurrentStudent->PNextStudent && PCurrentStudent->PNextStudent->PNextStudent){
		PCurrentStudent = PCurrentStudent->PNextStudent->PNextStudent;
		PMidStudent=PMidStudent->PNextStudent;
	}
	DPRINTF("\n The middle Student in the database is: ")
	DPRINTF("\n\t student id : %d", PMidStudent->student.ID );
	DPRINTF("\n\t student name : %s", PMidStudent->student.name );
	DPRINTF("\n\t student height : %f", PMidStudent->student.height );

}
void Reverse_list(){
	struct SStudent * PLastStudent = PFirstStudent;
	//struct SStudent * PPrevStudent = PFirstStudent;
	//struct SStudent * temp;

	//check if list is empty
	if(PFirstStudent == NULL){
		DPRINTF("\nData base is empty ..\n");
		return;
	}
	else if(!PFirstStudent->PNextStudent){
		DPRINTF("\nDone\n");
		view_Students();
		return;
	}
	PLastStudent = PLastStudent->PNextStudent;
	while(PLastStudent->PNextStudent){
		//PPrevStudent = PLastStudent;
		PLastStudent = PLastStudent->PNextStudent;
	}


}

