#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	/*
	char* pary[5];
	
	int i;

	pary[0] = "dog";
	pary[1] = "cat";
	pary[2] = "horse";
	pary[3] = "lion";
	pary[4] = "tiger";
	*/

	

	/*
	// 여러 개의 1차원 배열을 2차원처럼 사용
	int arr1[4] = { 1,2,3,4 };
	int arr2[5] = { 11,22,33,44 };
	int arr3[4] = { 21, 22, 23, 24 };
	int* parr[3] = {arr1, arr2, arr3};

	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			printf("%5d", parr[i][j]);
		}
		printf("\n");
	}
	printf("parr[2][2]: %d\n", parr[2][2]);
	printf("parr[2][2]: %d\n\n\n", *(parr[2]+2));



	int a = 0, b = 1, c = 2;
	int* pi[3] = { &a, &b, &c };

	int k;
	for (k = 0; k < 3; k++) {
		printf("%5d\n", *pi[k]);

	}
	*/


	int arr[5][6] = { 0 };

	int i, j, c = 1;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 5; j++) {
			arr[i][j] = c;
			c++;
		}
	}

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 5; j++) {
			arr[i][5] += arr[i][j];
		}
	}



	for (j = 0; j < 6; i++) {
		for (i = 0; i < 4; i++) {
			arr[4][j] += arr[i][j];
		}

	}



	for (i = 0; i < 5; i++) {
		for (j = 0; j < 6; j++) {
			printf("%5d", arr[i][j]);
			
			
		}
		printf("\n");
	}


	return 0;
}