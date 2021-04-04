#include <stdio.h>

int main()
{
    float num_1, num_2;
    printf("Enter two numbers: ");
    scanf("%f %f", &num_1, &num_2);
    printf("Sum: %.6f", num_1 * num_2);
    
    return 0;
}