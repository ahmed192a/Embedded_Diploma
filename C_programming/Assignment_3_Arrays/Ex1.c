#include <stdio.h>

int main()
{

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float Arr_1[2][2];
	float Arr_2[2][2];
	float sum[2][2];

	printf("Enter the element of 1st matrix\n");
	printf("Enter a11: ");
	scanf("%f",&Arr_1[0][0]);
	printf("Enter a12: ");
	scanf("%f",&Arr_1[0][1]);
	printf("Enter a21: ");
	scanf("%f",&Arr_1[1][0]);
	printf("Enter a22: ");
	scanf("%f",&Arr_1[1][1]);

	printf("Enter the element of 1st matrix\n");
	printf("Enter b11: ");
	scanf("%f",&Arr_2[0][0]);
	printf("Enter b12: ");
	scanf("%f",&Arr_2[0][1]);
	printf("Enter b21: ");
	scanf("%f",&Arr_2[1][0]);
	printf("Enter b22: ");
	scanf("%f",&Arr_2[1][1]);

	sum[0][0] = Arr_1[0][0] + Arr_2[0][0];
	sum[0][1] = Arr_1[0][1] + Arr_2[0][1];
	sum[1][0] = Arr_1[1][0] + Arr_2[1][0];
	sum[1][1] = Arr_1[1][1] + Arr_2[1][1];

	printf("Sum Of Matrix:\n");

	printf("%f\t%f\n",sum[0][0],sum[0][1]);
	printf("%f\t%f\n",sum[1][0],sum[1][1]);


    return 0;
}
