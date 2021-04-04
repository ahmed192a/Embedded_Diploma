
#include <stdio.h>

int main()
{
    int num, sum;
    printf("Enter an integer : ");
    scanf("%d", &num);
    for( int i = 0; i <= num; i++){
        sum += i;
    }
    printf("Sum = %d", sum);
    
    return 0;
}