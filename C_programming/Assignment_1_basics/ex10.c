#include <stdio.h>

int main()
{
    float num0, num1, num2, max;
    printf("Entre three numbers: ");
    scanf("%f %f %f", &num0, &num1, &num2);
    if(num0 > num1){
        if(num0 > num2)
            max = num0;
        else
            max = num2;
    }
    else{
        if(num1 > num2)
            max = num1;
        else
            max = num2;
    } 
    printf("largest number = %g", max);
    return 0;
}