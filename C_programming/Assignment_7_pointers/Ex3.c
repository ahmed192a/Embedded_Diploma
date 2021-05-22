#include <stdio.h>
#include <string.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char s[20];
	char c;
	printf("Input a string : ");
	gets(s);
	char *f = &s[strlen(s) -1];
	for(int i = 0; i < strlen(s)/2; i++,f--){
		c = *f;
		*f = s[i];
		s[i] = c;
	}
	printf("%s", s);




    return 0;
}
