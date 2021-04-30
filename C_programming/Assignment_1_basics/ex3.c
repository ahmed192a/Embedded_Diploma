#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
    int num_1, num_2;
    printf("Enter two integers: ");
    scanf("%d %d", &num_1, &num_2);
    printf("Sum: %d", num_1 + num_2);
    
    return 0;
}
