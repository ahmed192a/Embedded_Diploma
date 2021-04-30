#include <stdio.h>

int main()
{

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char s[20];
	int count=0;
	printf("Enter a string: ");
	scanf("%s",s);


	for( ; s[count]; count++);

	printf("Length of string = %d",count);
    return 0;
}
