#include <stdio.h>

int main()
{
    int num;
    scanf("Enter a integer: %d", &num);
    fflush(stdout);	fflush(stdin);
    printf("You entered: %d", num);
    
    return 0;
}
