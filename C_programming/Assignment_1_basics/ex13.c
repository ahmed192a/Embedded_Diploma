
#include <stdio.h>

int main()
{
 	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int num, sum=0;
    printf("Enter an integer : ");
    scanf("%d", &num);
    for( int i = 0; i <= num; i++){
        sum += i;
    }
    printf("Sum = %d", sum);

    return 0;
}
