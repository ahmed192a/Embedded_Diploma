#include <stdio.h>

int main()
{
    int num, sum=1;
    printf("Enter an integer : ");
    scanf("%d", &num);
    if(num <0){
       printf("ERROR!!! Factorial of negative number doesn't exist."); 
    }
    else{
        for( int i = 1; i <= num; i++){
            sum *= i;
        }
        printf("Sum = %d", sum);
    }
    return 0;
}