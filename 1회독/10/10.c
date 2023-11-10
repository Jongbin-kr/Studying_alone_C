#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void print_arr(int* pa, int size);
void input_arry(double* pa, int size);
double find_max(double* pa, int size);


int main(void) {
	
	/*
	int arr[3];  //배열명은 주소다!!!!!
	int i;

	*(arr + 0) = 10;
	*(arr + 1) = *(arr + 0) + 10;
	
	printf("arr[2]? : ");
	scanf("%d", arr + 2);

	for (i = 0; i < 3; i++) {
		printf("%5d\n", *(arr + i));
	}
	
	printf("------------------------------\n");



	//배열명 역할을 하는 포인터
	int* parr = arr;
	
	*parr = 10;
	*(parr + 1) = 20;
	parr[2] = parr[0] + parr[1];

	for (i = 0; i < 3; i++) {
		printf("pa[i]: %d\n\n\n", parr[i]);
	}



	printf("--------------------------------\n");

	// 배열명과 포인터의 차이
	printf("size of arr: %d, size of parr: %d\n\n", sizeof(arr), sizeof(parr));




	for (i = 0; i < 3; i++) {
		printf("%d\n", *parr++);
	}

	printf("-----------------------------------\n");

	//포인터의 뺄셈과 관계연산

	int arr3[5] = { 10, 20, 30, 40, 50 };
	int* parr3 = arr3;
	int* parr3p3 = parr3 + 3;

	printf("parr3: %u\n", parr3);
	printf("parr3p3: %u\n", parr3p3);
	printf("parr3p3 - parr3: %u\n", parr3p3 - parr3);
	*/

	/*
	//배열을 처리하는 함수
	int arr[] = { 1,2,3,4,5,6,7 };
	int* pa = arr;
	print_arr(arr, sizeof(arr)/sizeof(arr[0]));


	printf("arr[1]: %d\n", arr[1]);
	printf("pa[1]: %d\n", pa[1]);

	printf("--------------------------------\n");



	//배열에 값을 입력하는 함수
	double arry[5];
	double max;
	int size = sizeof(arry) / sizeof(arry[0]);

	input_arry(arry, size);
	max = find_max(arry, size);
	printf("max of arry: %lf", max);
	*/




	/*
	//배열의 주소값과 포인터의 관계 총정리
	int arr[10] = { 1, 2, 3 };
	int* pa = arr;

	printf("pa: %d\n", pa); //0번쨰 요소의 주소값
	printf("arr: %d\n", arr); //0번쨰 요소의 주소값
	printf("&arr[0]: %d\n\n\n", &arr[0]);

	printf("pa+1: %d\n", pa + 1);
	printf("arr+1: %d\n\n\n", arr + 1);

	printf("*pa: %d\n", *pa); //0번째 요소값
	printf("arr[0]: %d\n", arr[0]); //0번째 요소값
	printf("pa[0]: %d\n\n\n", pa[0]); //0번째 요소값

	printf("arr[1]: %d\n", arr[1]); //1번째 요소값
	printf("pa[1]: %d\n", pa[1]);
	printf("*(arr+1): %d\n\n\n", *(arr + 1));
	printf("*(pa+1): %d\n", *(pa+1));
	*/
	

	/*
	//각 달의 일수
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
