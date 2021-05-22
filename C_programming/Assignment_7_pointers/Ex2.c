#include <stdio.h>


int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char a = 'A';
	char *ptr = &a;

	printf("The Alphabets are: \n");

	for(; *ptr<= 'Z'; (*ptr)++) printf("%c ",*ptr);




    return 0;
}
