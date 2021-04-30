#include <stdio.h>
#include <stdlib.h>
int main()
{

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int row, col;
	int **arr;

	printf("Enter row and colomn of matrix: ");
	scanf("%d %d",&row, &col);
	arr =(int **)malloc(sizeof(int)*col*row);
	printf("Enter elements of the matrix\n");
	for(int i = 0; i<row; i++){
		for(int j = 0; j<col; j++){
			printf("Enter element a%d%d: ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Entered Matrix\n");
	for(int i = 0; i<row; i++){
		for(int j = 0; j<col; j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("Transposed Matrix\n");
	for(int j = 0; j<col; j++){
		for(int i = 0; i<row; i++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
    return 0;
}
