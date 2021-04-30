#include <stdio.h>
#include <stdlib.h>
int main()
{

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int n, element, pos;
	int *arr, tmp;

	printf("Enter number of elements : ");
	scanf("%d",&n);
	arr  = (int *)malloc((n+1) * sizeof(int));

	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}

	printf("Enter the element to be inserted : ");
	scanf("%d", &element);
	printf("Enter the location : ");
	scanf("%d", &pos);

	for(int i = pos; i < n+1; i++){
		tmp = arr[i];
		arr[i] = element;
		element = tmp;
	}

	for(int i = 0; i < n+1; i++){
		printf("%d",arr[i]);
	}

    return 0;
}
