#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
    int num;
    printf ("Enter an integer you want to check: ");
    scanf("%d", &num);
    if(num%2 == 0){
        printf ("%d is even", num);
    }
    else{
        printf ("%d is odd", num);
    }
    return 0;
}
