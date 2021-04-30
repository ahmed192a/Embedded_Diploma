#include <stdio.h>
#include <stdlib.h>

int main()
{

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int num, i;
	float avg = 0;
	float *arr;
	scanf("%d",&num);
	arr = (float *)malloc(num * sizeof(float));
	for(i = 0; i<num; i++){
		printf("%d. Enter number: ",i);
		scanf("%f", &arr[i]);
		avg += arr[i]/num;
	}

	printf("Average = %f",avg);

	free(arr);
    return 0;
}
