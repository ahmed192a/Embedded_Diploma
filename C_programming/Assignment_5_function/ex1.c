
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


void myfunc(int n1, int n2){

	int flag  = 0;
	for(int i = n1;i<=n2;i++){
		flag = 0;

		for(int j = 2; j<=i/2;j++){
			if(i%j == 0) {
				flag =1;
				break;
			}
		}
		if(flag == 0) {
			printf("%d ",i);
		}
	}

}

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int n1, n2;
	printf("n1=");
	scanf("%d", &n1);
	printf("n2=");
	scanf("%d", &n2);
	myfunc(n1,n2);
	return 0;
}
