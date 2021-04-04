#include <stdio.h>

int main()
{
    char c;
    float num1, num2, result;
    
    printf("Enter operator either + or - or * or divide : ");
    scanf("%c", &c);
    printf("Enter two operands: ");
    scanf("%f %f", &num1, &num2)
    switch(c){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            printf("not valid operator");
            return 0;
            break;
            
    }
    printf("%g %c %g = %g", num1, c, num2, result);
    
    return 0;
}
