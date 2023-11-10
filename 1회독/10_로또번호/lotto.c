#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input_nums(int* pn);
void print_nums(int* pn);


int main(void) {

	int lotto_nums[6];
	
	input_nums(lotto_nums);
	print_nums(lotto_nums);

	return 0;
}

void input_nums(int* pn) {
	int i, j, temp, tf;

	for (i = 0; i < 6; i++) {
		int tf = 0;
		printf("번호 입력 : ");
		scanf("%d", &temp);

		for (j = 0; j < i; j++) {
			if (pn[j] == temp) {
				printf("같은 번호가 있습니다!\n");
				tf = 1;
				i--;
				break;
			}
		}

		if (tf == 0) {
			pn[i] = temp;
		}
	}
}


void print_nums(int* pn) {
	int i;
	printf("로또 번호 : ");
	for (i = 0; i < 6; i++) {
		printf("%d ", pn[i]);
	}
}
