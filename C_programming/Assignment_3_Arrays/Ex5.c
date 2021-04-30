#include <stdio.h>
#include <stdlib.h>

int main()
{

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int n, element;
	int *arr;

	printf("Enter number of elements : ");
	scanf("%d",&n);
	arr  = (int *)malloc((n) * sizeof(int));

	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}

	printf("Enter the element to be searched : ");
	scanf("%d", &element);

	for(int i = 0; i < n; i++){
		if(arr[i] == element){
			printf("Number found at location = %d", i);
			return 0;
		}
	}
	printf("Number is not in the array");


    return 0;
}
