
#include <stdio.h>

int main()
{
    int a, b, tmp;
    // getting the input
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    
    // swapping
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    
    
    // printing
    printf("After swapping, value of a = %d\n", a);
    printf("After swapping, value of b = %d", b);
    return 0;
}