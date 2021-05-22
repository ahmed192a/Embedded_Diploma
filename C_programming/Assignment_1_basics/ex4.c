#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
    float num_1, num_2, total;
    printf("Enter two numbers: ");
    scanf("%f %f", &num_1, &num_2);
	total = num_1 * num_2;
    printf("Sum: %.6f", total);
    
    return 0;
}