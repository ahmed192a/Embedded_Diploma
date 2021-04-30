#include <stdio.h>
#include <string.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
		
	char *s;
	char c;
	printf("Input a string : ");
	scanf("%s", &s);
	char *f = &s[strlen(s) -1];
	for(int i = 0; i < strlen(s)/2; i++,f--){
		c = *f;
		*f = s[i];
		s[i] = c;
	}

	


    
    return 0;
}
