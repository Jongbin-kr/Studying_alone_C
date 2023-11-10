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
		printf("��ȣ �Է� : ");
		scanf("%d", &temp);

		for (j = 0; j < i; j++) {
			if (pn[j] == temp) {
				printf("���� ��ȣ�� �ֽ��ϴ�!\n");
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
	printf("�ζ� ��ȣ : ");
	for (i = 0; i < 6; i++) {
		printf("%d ", pn[i]);
	}
}
