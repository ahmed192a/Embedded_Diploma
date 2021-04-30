#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
    char c;
    char vowels[5] = {'a', 'e', 'o' , 'u', 'i'};

    printf ("Enter an alphabet: ");
    scanf("%c", &c);
    if(c <97){
        c += 32;
    }
    for(char i = 0; i<5; i++){
        if(c == vowels[i]){
            printf("%c is a vowel.", c);
            return 0;
        }
    }
    printf("%c is a constant.", c);
    return 0;
}
