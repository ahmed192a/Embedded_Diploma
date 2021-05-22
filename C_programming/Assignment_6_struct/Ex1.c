#include <stdio.h>

typedef struct {
	char name[20];
	int roll;
	float marks;
}student;


int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	student s1;
	printf("Enter information for student :\n\n");

	printf("Enter name : ");
	scanf("%s", s1.name);

	printf("Enter roll number : ");
	scanf("%d", &s1.roll);

	printf("Enter marks : ");
	scanf("%f", &s1.marks);

	printf("Display information :\n");
	printf("name: %s", s1.name);
	printf("\t roll: %d", s1.roll);
	printf("\t marks: %f", s1.marks);


    return 0;
}
