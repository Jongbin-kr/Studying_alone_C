#include <stdio.h>

int main() {
	/*
	int a = 1;

	//while��
	while (a < 10) {
		a = a * 2;

	}
	printf("a: %d\n", a);


	//for��
	int i;

	for (i = 0; i < 3; i++) {
		a *= 2;
	}
	printf("for a :%d\n", a);

	//do~while
	do {
		a *= 2;
	} while (a < 10);



	//Ȯ�ι��� 3
	int j;
	for (j = 0; j < 10; j++) {
		printf("$");
	}
	printf("\n\n\n");


	//��ø�ݺ���
	for (j = 0; j < 3; j++) {
		for (i = 0; i < 5; i++) {
			printf("*");
		}
		printf("\n");
	}

	printf("\n\n\n");

	//Ȯ�ι��� 3��
	for (i = 0; i < 5; i++){
		for (j = 0; j < 5; j++) {
			if ((i == j) || (i + j == 4)) {
				printf("*");
			}else {
				printf(" ");
			}
		}
		printf("\n");
	}
	*/



	//��������
	int x;
	int i, j, cnt;
	
	cnt = 1;
	printf("2�̻��� ������ �Է��ϼ���: ");
	scanf("%d", &x);

	/*
	i = 2;
	while (i <= x) { //i�� �Ҽ��׽�Ʈ�� ���� ����

		if (i == 2) {
			printf("%5d ", i);
			cnt += 1;
		}

		j = 2;
		while (j < i) {
			if (i % j != 0) {
				if (i - 1 == j) {
					printf("%5d ", i);
					cnt += 1;
				}
				j++;
				continue;

			}else break;
		}
		
		i++;

		if (cnt == 6) {
			printf("\n");
			cnt = 1;
		}

		}


	
	*/

	for (i = 2; i <= x; i++) {
		
		for (j = 2; j <= i; j++) {

		}

	}


	return 0;
}