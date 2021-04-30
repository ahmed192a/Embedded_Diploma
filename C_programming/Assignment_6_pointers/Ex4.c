#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
		
	int arr[15];
	int n;
	printf("Input the number of elements to store in the array (max 15) : ");
	scanf("%d", &n);
	printf("Input %d number of elements in the array :\n", n);
	for(int i = 1; i <= n; i++){
		printf("element - %d : ", i);
		scanf("%d", arr[i]);
	}
	
	printf("The elements of array in reverse order are :");
	
    for(int i = n; i >= 1; i--){
		printf("element - %d : %d", i, arr[i]);
	}
	
    return 0;
}
