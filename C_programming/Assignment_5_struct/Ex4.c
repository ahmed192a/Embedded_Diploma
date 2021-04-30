#include <stdio.h>
#define S_NUM 10
typedef struct {
	char name[20];
	int roll;
	float marks;
}student;


int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	student s[S_NUM];
	printf("Enter information for students :\n");

	for(int i  = 0; i<S_NUM; i++){
		printf("\nFor roll number %d\n", i+1);
		s[i].roll = i+1;

		printf("Enter name : ");
		scanf("%s", s[i].name);

		printf("Enter marks : ");
		scanf("%f", &s[i].marks);
	}


	printf("\nDisplay information of students :\n");
	for(int i  = 0; i<S_NUM; i++){
		printf("\nInformation for roll number %d", s[i].roll);
		printf("\n name: %s", s[i].name);
		printf("\n marks: %0.3f", s[i].marks);

	}


    return 0;
}
