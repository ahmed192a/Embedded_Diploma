
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a integer: ");
    fflush(stdout);
    scanf("%d", &num);
    fflush(stdin);
    printf("You entered: %d", num);

    return 0;
}
