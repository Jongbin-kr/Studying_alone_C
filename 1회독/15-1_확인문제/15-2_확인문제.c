#include <stdio.h>

int main(void) {
	
	int arr[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
	
	int (*pa)[4] = arr;
	int (*pb)[3][4] = &arr;

	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("%5d", pa[i][j]);
		}
		printf("\n");
	}

	
	printf("arr[0][0]: %d\n", arr[0][0]);
	printf("pa[0][0]: %d\n", pa[0][0]);
	printf("pb[0][0]: %d\n", pb[0][0]);




	return 0;
}