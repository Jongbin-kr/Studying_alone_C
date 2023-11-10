#include <stdio.h>

void  assign10(void);
void assign20(void);

void auto_func(void);
void static_func(void);

void func(void);

int a;

int g;

int main(void) {
	
	/*
	//전역변수 예시
	printf("before assign: %d\n", a);
	
	assign10();
	printf("after assign10: %d\n", a);

	assign20();
	printf("after assign20: %d\n\n\n",a);


	//정적 지역변수
	int i;

	printf("auto variable\n");
	for (i = 0; i < 3; i++) {
		auto_func();
	}

	printf("static varable\n");
	for (i = 0; i < 3; i++) {
		static_func();
	}




	//레지스터 변수
	register int j;
	auto int sum = 0;

	for (j = 0; j < 10000; j++) {
		sum += j;
	}

	printf("sum: %d\n", sum);
	*/



	func();
	printf("g?: %d\n", g);



	return 0;
}

void assign10(void) {
	a = 10;
}

void assign20(void) {
	int a;

	a = 20;
}

void auto_func(void) {
	auto int a = 0;
	a++;
	printf("%d\n", a);
}

void static_func(void) {
	static int a;
	a++;
	printf("%d\n", a);
}


void func(void) {
	static g;
	g = 100;
}