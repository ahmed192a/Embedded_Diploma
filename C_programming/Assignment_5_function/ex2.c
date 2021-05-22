#include <stdio.h>
#include <string.h>
void reverse(char *c){
	for(int i = strlen(c)-1; i>=0;i--){
		printf("%c", c[i]);
	}
}

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	char s[50];
	printf("Enter string : ");
	gets(s);
	reverse(s);
	
	

    return 0;
}
