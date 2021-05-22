#include <stdio.h>
#include <math.h>
#define AREA(x) (3.14*x*x)


int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int r;
	float area;
	printf("Enter radius : ");
	scanf("%d",&r);
	area = AREA(r);
	printf("Area= %0.3f", area);

    return 0;
}
