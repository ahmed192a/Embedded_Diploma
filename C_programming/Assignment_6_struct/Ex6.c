#include <stdio.h>

union job{
	char name[32];
	float salary;
	int worker_no;
}u;

struct job1{
	char name [32];
	float salary;
	int worker_no;
}s;

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	printf("size of union = %d", sizeof(u));
	printf("\nsize of structure = %d", sizeof(s));
    
    return 0;
}

// output
/*
size of union =  32
size of structure = 40
*/