#include <stdio.h>

typedef struct {
	float real;
	float img;
}comp;


int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	comp d1, d2, d3;

	printf("for 1st complex number\n");
	printf("Enter real and imaginary respectively: ");
	scanf("%f %f", &d1.real , &d1.img);

	printf("\n\nfor 2st complex number\n");
	printf("Enter real and imaginary respectively: ");
	scanf("%f %f", &d2.real , &d2.img);


	d3.real = d1.real + d2.real;
	d3.img = d1.img + d2.img ;
	printf("\nSum=%0.2f+%0.2fi\n", d3.real, d3.img);

    return 0;
}
