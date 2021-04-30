#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
    float num0;
    printf("Entre a number: ");
    scanf("%f", &num0);
    if(num0 > 0){
        printf("%g is positive.", num0);
    }
    else if(num0 < 0){
        printf("%g is negative.", num0);
    }
    else{
        printf("you entered zero");
    }
    return 0;
}
