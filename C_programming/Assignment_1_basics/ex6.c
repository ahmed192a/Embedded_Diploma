#include <stdio.h>

int main()
{
    float a, b, tmp;
    // getting the input
    printf("Enter value of a: ");
    scanf("%f", &a);
    printf("Enter value of b: ");
    scanf("%f", &b);
    
    // swapping
    tmp = a;
    a = b;
    b = tmp;
    
    // printing
    printf("After swapping, value of a = %g\n", a);
    printf("After swapping, value of b = %g", b);
    return 0;
}