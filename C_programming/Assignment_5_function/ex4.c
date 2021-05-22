#include <stdio.h>
int Pow(int x, int y){
	if(y==1) return x;
	return x * Pow(x,y-1);
}

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int num,pow;
	printf("Enter num : ");
	scanf("%d", &num);
	printf("Enter power num : ");
	scanf("%d", &pow);	
	printf("%d ^ %d = %d", num, pow , Pow(num, pow));


    return 0;
}
