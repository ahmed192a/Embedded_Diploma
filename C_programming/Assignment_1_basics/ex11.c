#include <stdio.h>

int main()
{
    float num0, num1, num2, max;
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