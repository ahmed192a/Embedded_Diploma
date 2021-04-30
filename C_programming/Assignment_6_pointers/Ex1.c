#include <stdio.h>


int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
		
	int m = 29;
	int *ab = &m;
	
	printf("Address of m : %p", &m);
	printf("Value of m : %d",m);
	
	printf("\nNow ab is assigned with the address of m.");
	
	printf("Address of pointer ab : %p", ab);
	printf("Content of pointer ab : %d", *ab);
	
	m = 34;
	printf("The value of m assigned to 34 now.");
	
	printf("Address of pointer ab : %p", ab);
	printf("Content of pointer ab : %d", *ab);

	*ab = 7;
	printf("The pointer variable ab is assigned with the value 7 now.");
	printf("Address of m : %p", &m);
	printf("Value of m : %d",m);

    
    return 0;
}
