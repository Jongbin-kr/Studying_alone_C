#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void print_arr(int* pa, int size);
void input_arry(double* pa, int size);
double find_max(double* pa, int size);


int main(void) {
	
	/*
	int arr[3];  //�迭���� �ּҴ�!!!!!
	int i;

	*(arr + 0) = 10;
	*(arr + 1) = *(arr + 0) + 10;
	
	printf("arr[2]? : ");
	scanf("%d", arr + 2);

	for (i = 0; i < 3; i++) {
		printf("%5d\n", *(arr + i));
	}
	
	printf("------------------------------\n");



	//�迭�� ������ �ϴ� ������
	int* parr = arr;
	
	*parr = 10;
	*(parr + 1) = 20;
	parr[2] = parr[0] + parr[1];

	for (i = 0; i < 3; i++) {
		printf("pa[i]: %d\n\n\n", parr[i]);
	}



	printf("--------------------------------\n");

	// �迭��� �������� ����
	printf("size of arr: %d, size of parr: %d\n\n", sizeof(arr), sizeof(parr));




	for (i = 0; i < 3; i++) {
		printf("%d\n", *parr++);
	}

	printf("-----------------------------------\n");

	//�������� ������ ���迬��

	int arr3[5] = { 10, 20, 30, 40, 50 };
	int* parr3 = arr3;
	int* parr3p3 = parr3 + 3;

	printf("parr3: %u\n", parr3);
	printf("parr3p3: %u\n", parr3p3);
	printf("parr3p3 - parr3: %u\n", parr3p3 - parr3);
	*/

	/*
	//�迭�� ó���ϴ� �Լ�
	int arr[] = { 1,2,3,4,5,6,7 };
	int* pa = arr;
	print_arr(arr, sizeof(arr)/sizeof(arr[0]));


	printf("arr[1]: %d\n", arr[1]);
	printf("pa[1]: %d\n", pa[1]);

	printf("--------------------------------\n");



	//�迭�� ���� �Է��ϴ� �Լ�
	double arry[5];
	double max;
	int size = sizeof(arry) / sizeof(arry[0]);

	input_arry(arry, size);
	max = find_max(arry, size);
	printf("max of arry: %lf", max);
	*/




	/*
	//�迭�� �ּҰ��� �������� ���� ������
	int arr[10] = { 1, 2, 3 };
	int* pa = arr;

	printf("pa: %d\n", pa); //0���� ����� �ּҰ�
	printf("arr: %d\n", arr); //0���� ����� �ּҰ�
	printf("&arr[0]: %d\n\n\n", &arr[0]);

	printf("pa+1: %d\n", pa + 1);
	printf("arr+1: %d\n\n\n", arr + 1);

	printf("*pa: %d\n", *pa); //0��° ��Ұ�
	printf("arr[0]: %d\n", arr[0]); //0��° ��Ұ�
	printf("pa[0]: %d\n\n\n", pa[0]); //0��° ��Ұ�

	printf("arr[1]: %d\n", arr[1]); //1��° ��Ұ�
	printf("pa[1]: %d\n", pa[1]);
	printf("*(arr+1): %d\n\n\n", *(arr + 1));
	printf("*(pa+1): %d\n", *(pa+1));
	*/
	

	/*
	//�� ���� �ϼ�
	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int* pm = month;
	int i;

	for (i = 0; i < 12; i++) {
		//printf("%5d", month[i]);
		//printf("%5d", pm[i]);
		//printf("%5d", *(pm+i));
		printf("%5d", *(month + i));


		if ((i + 1) % 5 == 0) printf("\n");
	}
	*/

	
}





void print_arr(int* pa, int size) {
	int i;
	for (i = 0; i < size; i++) {
		//printf("%d\n", *pa++);
		printf("%d\n", pa[i]);
	}
}


void input_arry(double* pa, int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("input_arry[%d]", i);
		scanf("%lf", pa + i);
	}
}

double find_max(double* pa, int size) {
	int i;
	double temp = 0.0;
	for (i = 0; i < size; i++) {
		if (pa[i] >= temp) {
			temp = pa[i];
		}
	}

	return temp;
}
