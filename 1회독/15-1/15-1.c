#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void swap_ptr(char** pa, char** ppb);
void swap(char* pa, char* pb);
void print_str(char** pps, int cnt);


int main(void) {

	/*
	int a = 10;
	int* pi;
	int** ppi;

	pi = &a;
	ppi = &pi;

	printf("---------------------------------------\n");
	printf(" ���� ������ &���� *���� **���� \n");
	printf("---------------------------------------\n");
	printf("  a%20d%20u\n", a, &a);
	printf("  pi%20u%20u%20d\n", pi, &pi, *pi);
	printf("  ppi%20u%20u%20u%20u\n", ppi, &ppi, *ppi, **ppi);
	printf("---------------------------------------\n\n\n");
	*/


	//���� �����͸� Ȱ���� ������ ��ȯ
	char* px = "success";
	char* py = "failure";

	char x[20] = "success";
	char y[20] = "failure";
	
	printf("px : %s, py: %s\n", px, py);
	swap_ptr(&px, &py);
	printf("px : %s, py: %s\n\n", px, py);

	printf("x : %s, y: %s\n", x, y);
	swap(x, y);
	printf("x : %s, y: %s\n", x, y);

	
	

	// ������ �迭�� ���� ����ϴ� �Լ�
	char* ptr_arr[] = { "eagle", "tiger", "lion", "squirrel" };
	int cnt;

	cnt = sizeof(ptr_arr) / sizeof(ptr_arr[0]);

	print_str(ptr_arr, cnt);
	printf("\n\n\n");



	// �ּҷ� ���̴� �迭��� �迭�� �ּ� ��
	int arr[5];

	printf("arr: %u\t", arr);
	printf("&arr: %u\n", &arr);
	printf("arr+1: %u\t", arr+1);
	printf("&arr+1: %u\n\n", &arr+1);
	printf("sizeof(arr): %d, sizeof(&arr): %d\n\n\n", sizeof(arr), sizeof(&arr));



	//���� �����ͷ� 2������ �� ���
	int ary[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
	int(*pa)[4] = ary;

	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("%5d", pa[i][j]);
		}
		printf("\n");
	}





	return 0;
}


void swap_ptr(char** ppa, char** ppb) {
	char *pt;

	pt = *ppa;
	*ppa = *ppb;
	*ppb = pt;
}


void swap(char* pa, char* pb) {
	char *pt;

	pt = *pa;
	*pa = *pb;
	*pb = pt;
}



void print_str(char** pps, int cnt) {
	
	int i;
	for (i = 0; i < cnt; i++) {
		printf("%s\n", pps[i]);
	}
	
}