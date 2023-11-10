#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void func(int (*fp)(int, int));

int sum(int , int);
int mul(int a, int b);
int max(int a, int b);

int main(void) {

	/*
	int (*fp)(int, int);
	int res;

	fp = sum;
	//res = fp(10, 20);
	res = (*sum)(10, 20);
	printf("result: %d\n", res);
	*/



	/*
	// 함수 포인터

	int sel;

	printf("select menu");
	scanf("%d", &sel);

	switch (sel)
	{
	case 1: func(sum); break;
	case 2: func(mul); break;
	case 3: func(max); break;
	}
	*/





	int a = 10;
	double b = 3.5;

	void* vp;

	vp = &a;
	printf("a : %d\n", *(int*)vp);
	printf("&a: %u\n", (int*)vp);
	printf("&a + 1: %u\n\n", (int*)vp + 1);

	vp = &b;
	printf("b: %lf\n", *(double *)vp);





	return 0;
}

void func(int (*fp)(int, int)) {
	int a, b;
	int res;

	printf("input a, b\n");
	scanf("%d%d", &a, &b);
	
	res = fp(a, b);
	printf("result: %d\n", res);
}


int sum(int a, int b) {
	return (a + b);
}

int mul(int a, int b) {
	return (a * b);
}

int max(int a, int b) {
	if (a > b) return a;
	else return b;
}