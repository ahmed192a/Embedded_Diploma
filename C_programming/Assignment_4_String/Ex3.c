#include <stdio.h>
#include <string.h>
int main()
{

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char s[20];
	char r[20];
	int l;
	printf("Enter a string: ");
	scanf("%s",s);
	l = strlen(s)-1;

	for(int i = 0 ; i<=l; i++){
		r[l-i] = s[i];
	}
	r[l+1]='\0';

	printf("Reversed string = %s",r);
    return 0;
}
