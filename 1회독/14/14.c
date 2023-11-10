#include <stdio.h>

int main(void) {

	/*
	int score[3][4];
	int total;
	double avg;
	int i, j;

	for (i = 0; i < 3; i++) {
		printf("4과목의 점수 입력: ");

		for (j = 0; j < 4; j++) {
			scanf("%d", &score[i][j]);
		}
	}

	for (i = 0; i < 3; i++) {
		total = 0;

		for (j = 0; j < 4; j++) {
			total += score[i][j];
		}
		avg = total / 4.0;
		printf("total: %d, avg: %.1lf\n", total, avg);

	}
	*/


	//2차원 char 배열
	char animal[5][20];
	int i;
	int count;

	count = sizeof(animal) / sizeof(animal[0]);

	for (i = 0; i < count; i++) {
		scanf("%s", animal[i]);
	}

	for (i = 0; i < count; i++) {
		printf("%s ", animal[i]);
	}

	char a[][20] = {
		{'i', 'o'},
		{'a','b'},
	};

	for (i = 0; i < 2; i++) {
		printf("%s ", a[i]);
	}

	return 0;
}