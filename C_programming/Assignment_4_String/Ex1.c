#include <stdio.h>
#include <string.h>
int main()
{

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char s[20];
	char c;
	int count=0;
	printf("Enter a string: ");
	gets(s);
	printf("Enter a character to find a frequency: ");
	c = getchar();
	
	for(int i = 0; i<strlen(s); i++){
		if(s[i] == c) count++;
	}
	printf("Frequency of %c = %d\n",c,count);

    return 0;
}
