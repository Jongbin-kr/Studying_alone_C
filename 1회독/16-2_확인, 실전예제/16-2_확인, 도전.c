#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int input;
	printf("양수 입력 : ");
	scanf("%d", input);

	int* list = (int*)malloc(input * sizeof(int));

	int p = 0;
	int i,j;
	
	for (i = 1; i < input; i++){
		for (j = 1; j < i; j++) {
			if (i % j != 0) {
				p = 1;
				break;
			}

		}

		if (p == 0) {
			list[i - 1] = i;
		}
		else {
			list[i - 1] = "X";
		}

	}


	return 0;
}