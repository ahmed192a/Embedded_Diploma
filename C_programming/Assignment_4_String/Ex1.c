#include <stdio.h>

int main()
{

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char s[20];
	char c;
	int count=0;
	printf("Enter a string: ");
	scanf("%s",s);
	printf("Enter a character to find a frequency: \n");
	scanf("%c",&c);
	for(int i = 0; s[i]; i++){
		if(s[i] == c) count++;
	}
	printf("Frequency of %c = %d",c,count);

    return 0;
}
