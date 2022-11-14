/*
 * LogicSystem.c
 *
 *      Author: Ahmed
 */
#include "LogicSystem.h"
#include "string.h"
int kh = 0;

void add_student_file()
{
	// open file implementation
}
void add_student_manually()
{
	int r=0 , i;
	DPRINTF("---------------------------------------\n");
	DPRINTF("Add The Student Details\n")
	DPRINTF("---------------------------------------\n");
	DPRINTF("Enter the Roll number : ");
	scanf("%d",&r );
	if(r!= 0 && StudentMemory[r].roll == 0){
		kh++;
		StudentMemory[r-1].roll = r;
		DPRINTF("Enter the first name of the student : ");
		scanf("%s", StudentMemory[r-1].fname);
		DPRINTF("Enter the last  name of the student : ");
		scanf("%s", StudentMemory[r-1].lname);
		DPRINTF("Enter the GPA you obtained : ");
		scanf("%f", &StudentMemory[r-1].GPA);
		DPRINTF("Enter the Course id of each course \n");
		for(i = 1 ; i < 6;i++){
			DPRINTF("Course %d id: ", i);
			scanf("%d", &StudentMemory[r-1].cid[i-1]);

		}
		DPRINTF("[INFO] Student details is added successfully\n");
		DPRINTF("---------------------------------------\n");
		DPRINTF("[INFO] The total number of students %d\n", kh);
		DPRINTF("[INFO] you can add up to %d students\n", student_size);
		DPRINTF("[INFO] you can add %d more students\n", student_size-kh);
		DPRINTF("---------------------------------------\n");
	}
	else{
		DPRINTF("---------------------------------------\n");
		DPRINTF("[ERROR] Roll number %d is already taken\n", r);
		DPRINTF("---------------------------------------\n");
	}
}
void find_rl() // by Roll Number
{
	int r,i;
	DPRINTF("---------------------------------------\n");
	DPRINTF("Enter the Roll number of the student : ");
	scanf("%d",&r);
	if( r != 0 && StudentMemory[r-1].roll != 0 )
	{
		DPRINTF("The student details are:\n");
		DPRINTF("The first name is %s\n", StudentMemory[r-1].fname);
		DPRINTF("The last  name is %s\n", StudentMemory[r-1].lname);
		DPRINTF("The Roll number is %d\n", StudentMemory[r-1].roll);
		DPRINTF("The GPA is %f\n", StudentMemory[r-1].GPA);
		DPRINTF("The courses id are:\n");
		for(i = 1 ; i < 6;i++){
			DPRINTF("Course %d id is : %d\n", i, StudentMemory[r-1].cid[i-1]);
		}
	}
	else {
		DPRINTF("[ERROR] Roll number %d is not found\n", r);
	}
	DPRINTF("---------------------------------------\n");
}
void find_fn() // by first name
{
	int i, j;
	char name[20], f=0;
	DPRINTF("---------------------------------------\n");
	DPRINTF("Enter the first name of the student : ");
	scanf("%s",name);
	for(i=0;i<student_size;i++){
		if(StudentMemory[i].roll !=0 && !strcmp(name, StudentMemory[i].fname)){
			f=1;
			DPRINTF("The student details are:\n");
			DPRINTF("The first name is %s\n", StudentMemory[i].fname);
			DPRINTF("The last  name is %s\n", StudentMemory[i].lname);
			DPRINTF("The Roll number is %d\n", StudentMemory[i].roll);
			DPRINTF("The GPA is %f\n", StudentMemory[i].GPA);
			DPRINTF("The courses id are:\n");
			for(j = 1 ; j < 6;j++){
				DPRINTF("Course %d id is : %d\n", j, StudentMemory[i].cid[j-1]);
			}
		}
	}
	if(f==0){
		DPRINTF("[ERROR] the name %s is not found\n", name);
	}
	DPRINTF("---------------------------------------\n");
}
void find_c() // by course id
{
	int i, j, cid;
	char f=0, fc=0;
	DPRINTF("---------------------------------------\n");
	DPRINTF("Enter the course id of the student : ");
	scanf("%d",&cid);
	for(i=0;i<student_size;i++){
		if(StudentMemory[i].roll !=0){
			fc=0;
			for(j = 1 ; j < 6;j++){
				if(StudentMemory[i].cid[j-1] == cid) {
					fc=1;
					break;
				}
			}
			if(fc!=1) continue;
			f=1;
			DPRINTF("The student details are:\n");
			DPRINTF("The first name is %s\n", StudentMemory[i].fname);
			DPRINTF("The last  name is %s\n", StudentMemory[i].lname);
			DPRINTF("The Roll number is %d\n", StudentMemory[i].roll);
			DPRINTF("The GPA is %f\n", StudentMemory[i].GPA);
			DPRINTF("The courses id are:\n");
			for(j = 1 ; j < 6;j++){
				DPRINTF("Course %d id is : %d\n", j, StudentMemory[i].cid[j-1]);
			}
		}
	}
	if(f==0){
		DPRINTF("[ERROR] the course id %d not found\n", cid);
	}
	DPRINTF("---------------------------------------\n");
}
void tot_s()
{
	DPRINTF("---------------------------------------\n");
	DPRINTF("[INFO] The total number of students %d\n", kh);
	DPRINTF("[INFO] you can add up to %d students\n", student_size);
	DPRINTF("[INFO] you can add %d more students\n", student_size-kh);
	DPRINTF("---------------------------------------\n");
}
void del_s()
{
	int r;
	DPRINTF("---------------------------------------\n");
	DPRINTF("Enter the Roll number which you want to delete : \n");
	scanf("%d",&r);
	if(StudentMemory[r-1].roll !=0){
		StudentMemory[r-1].roll = 0;
		kh--;
		DPRINTF("[INFO] The Roll number is removed successfully\n");
	}
	else{
		DPRINTF("[ERROR] The Roll number %d id not found\n", r);
	}
	DPRINTF("---------------------------------------\n");
}
void up_s()
{
	int r, nr, c, i;
	DPRINTF("---------------------------------------\n");
	DPRINTF("Enter the Roll number to update the entry : \n");
	scanf("%d",&r);
	if(r==0 || StudentMemory[r-1].roll == 0 ){
		DPRINTF("[ERROR] Roll number %d is not found\n", r);
		return;
	}
	DPRINTF("1. first name\n");
	DPRINTF("2. last name\n");
	DPRINTF("3. Roll number\n");
	DPRINTF("4. GPA\n");
	DPRINTF("5. courses\n");
	scanf("%d", &c);
	switch(c){
	case 1:
		DPRINTF("Enter the new first name : ");
		scanf("%s",StudentMemory[r-1].fname);
		break;
	case 2:
		DPRINTF("Enter the new last name : ");
		scanf("%s",StudentMemory[r-1].lname);
		break;
	case 3:
		///modify the roll to be just info not index
		/// or copy the data to the new roll
		DPRINTF("Enter the new Roll number : ");
		scanf("%d",&nr);
		if(StudentMemory[nr-1].roll !=0 ){
			DPRINTF("[ERROR] the New Roll already exists \n");
			return;
		}

		StudentMemory[nr-1].roll = nr;
		strcpy(StudentMemory[nr-1].fname ,StudentMemory[r-1].fname);
		strcpy(StudentMemory[nr-1].lname ,StudentMemory[r-1].lname);
		StudentMemory[nr-1].GPA = StudentMemory[r-1].GPA;
		for(i = 1 ; i < 6;i++){
			StudentMemory[nr-1].cid[i-1] = StudentMemory[r-1].cid[i-1];
		}
		StudentMemory[r-1].roll = 0;
		break;
	case 4:
		DPRINTF("Enter the new GPA : ");
		scanf("%f",&StudentMemory[r-1].GPA);
		break;
	case 5:
		DPRINTF("Enter the new Course id of each course \n");
		for(i = 1 ; i < 6;i++){
			DPRINTF("Course %d id: ", i);
			scanf("%d", &StudentMemory[r-1].cid[i-1]);
		}
		break;
	default:
		DPRINTF("\t\"WRONG OPTION\"\n");
		return;
		break;
	}
	DPRINTF("[INFO] UPDATED SUCCESSFULLY\n");
}
void print_all_students()
{
	int i, j;
	if(kh==0){
		DPRINTF("[ERROR] There are no students yet\n");
		DPRINTF("---------------------------------------\n");
		return;
	}
	for(i=0;i<student_size;i++){
		if(StudentMemory[i].roll !=0){
			DPRINTF("The student details are:\n");
			DPRINTF("The first name is %s\n", StudentMemory[i].fname);
			DPRINTF("The last  name is %s\n", StudentMemory[i].lname);
			DPRINTF("The Roll number is %d\n", StudentMemory[i].roll);
			DPRINTF("The GPA is %f\n", StudentMemory[i].GPA);
			DPRINTF("The courses id are:\n");
			for(j = 1 ; j < 6;j++){
				DPRINTF("Course %d id is : %d\n", j, StudentMemory[i].cid[j-1]);
			}
		}
	}

}
