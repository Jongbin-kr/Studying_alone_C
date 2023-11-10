#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add_ten(int a);
void add_ten2(int* pa);
int* sum(int a, int b);

int main(void) {
	
	/*
	// 값을 복사해서 전달하기

	int a = 10;

	a = add_ten(a);

	printf("add_ten(a): %d\n", a);
	*/

	/*
	//주소를 전달하기
	int a = 10;

	add_ten2(&a);

	printf("add_ten2(a): %d\n", a);
	*/

	int* resp;

	resp = sum(10, 20);
	printf("sum: %d\n", *resp);



	return 0;
}



int add_ten(int a) {
	a += 10;

	return a;
}


void add_ten2(int* pa) {
	*pa += 10;
}

int* sum(int a, int b) {
	static int res;
	res = a + b;

	return &res;
}