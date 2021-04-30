#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
    char c;
    printf("Enter a character : ");
    scanf("%c", &c);
    if((c>= 'a' && c<= 'z') || (c >= 'A' && c <= 'Z')){
        printf("%c is an alphabet", c);
    }
    else{
        printf("%c is not an alphabet", c);
    }

    return 0;
}
