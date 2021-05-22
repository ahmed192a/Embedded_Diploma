#include <stdio.h>

typedef struct {
	int feet;
	float inch;
}distance;


int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	distance d1, d2, d3;
	printf("Enter information for 1st distance\n");
	printf("Enter feet: ");
	scanf("%d", &d1.feet);
	printf("Enter inch: ");
	scanf("%f", &d1.inch);

	printf("Enter information for 2st distance\n");
	printf("Enter feet: ");
	scanf("%d", &d2.feet);
	printf("Enter inch: ");
	scanf("%f", &d2.inch);

	d3.inch = d1.inch + d2.inch;
	d3.feet = d1.feet + d2.feet + d3.inch/10;
	int k=(int)(d3.inch/10);
	d3.inch = d3.inch-k*10;
	printf("Sum of distances : %d' %0.2f\"", d3.feet, d3.inch);

    return 0;
}
