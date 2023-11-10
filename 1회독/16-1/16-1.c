#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int* pi;
	double* pd;

	pi = (int*)malloc(sizeof(int));

	if (pi == NULL) {
		printf("# out of memory");
		exit(1);
	}

	pd = (double*)malloc(sizeof(double));

	*pi = 10;
	*pd = 3.4;

	printf("*pi: %d\n", *pi);
	printf("*pd: %.1lf\n", *pd);

	free(pi);
	free(pd);



	int* pa;
	int i, sum = 0;

	pi = (int*)malloc(5 * sizeof(int));

	if (pi == 0) {
		printf("# out of memory");
		exit(1);
	}


	printf("input five ages");
	for (i = 0; i < 5; i++) {
		scanf("%d", pi+i);
		// == scanf("%d", &pi[i]); pi[i] = *(pi + i)이므로, &pi[i] == &*(pi + i) == pi + i
		sum += pi[i];
	}

	printf("avg of ages: %.1lf\n\n\n", (sum / 5.0));

	free(pi);






	// calloc, realloc
	int* pb;
	int size = 5, count = 0, num;

	pb = (int*)calloc(size, sizeof(int));

	while (1) {
		printf("양수 입력: ");
		scanf("%d", &num);
		if (num <= 0) break;
		if (count == size) {
			size += 5;
			pb = (int*)realloc(pb, size * sizeof(int));
		}

		pb[count++] = num;
		
	}

	int j;
	for (j = 0; j < count; j++) {
		printf("%5d", pb[j]);
	}


	free(pb);




	return 0;
}