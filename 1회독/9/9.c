#include <stdio.h>


void swap(int* pa, int* pb);

int main(void) {

	/*
	int a;
	double b;
	char c;

	printf("int: %p\n", &a);
	printf("double: %p\n", &b);
	printf("char: %p\n\n\n", &c);




	// 포인터의 선언과 사용
	int *pa;

	pa = &a; //포인터에 a의 주소값을 대입하과
	*pa = 10; //포인터로 변수 a에 10을 대입한다

	printf("포인터로 a값 출력 *pa: %d\n", *pa);
	printf("변수명으로 a값 출력 a: %d\n", a);
	printf("포인터 자체 값 pa: %p\n", pa);
	printf("*pa == a: %d\n", *pa == a);


	// 포인터를 이용한 두 정수의 합과 평균
	int x = 10, y = 15, total;
	double avg;

	int* px = &x, * py = &y;
	int* pt = &total;
	double* pavg = &avg;


	*pt = *px + *py;
	*pavg = *pt / 2.0;

	printf("x: %d, y: %d\n", *px, *py);
	printf("total: %d\n", *pt);
	printf("avg: %.1lf\n", *pavg);
	printf("pt == &total? : %d == %d\n\n\n", pt, &total);


	//주소와 포인터의 차이
	int* p;
	p = &x;
	printf("*p :%d\n", *p);

	p = &y;
	printf("*p: %d\n\n\n", *p);




	//주소와 포인터의 크기
	printf("size of *p: %d\n", sizeof(*p));
	printf("size of &y: %d\n", sizeof(&y));
	printf("size of p: %d\n\n\n", sizeof(p));  //주소와 포인터의 크기는 일정하지만, 간접참조값 즉 원본 값의 크기는 당연히 다르겠지

	*/


	//포인터의 대입과 자료형
	int a = 10;
	int* p = &a;
	double* pd;
	int* pp;

	pd = p;
	pp = p;
	printf("pd = p -> *pd: %lf\n", *pd);
	printf("pp = p -> *pp: %d\n\n\n", *pp);



	//형변환을 사용한 포인터의 대입
	double c = 3.4;
	double* pc = &a;
	int* pi;

	pi = (int*)pc;


	double dd = 3.4;
	long long ii = "1234567";
	double* pdd = &dd;
	long long* pii = &ii;

	printf("*pdd: %lf\n", *pdd);

	pii = (long long*)pdd;

	printf("pii = pdd -> *pii: %lf\n", *pii);
	printf("*pdd: %lf\n\n\n", *pdd);



	// 두 변수의 값을 바꾸며 포인터 이해하기
	int x = 10, y = 20;
	
	printf("&x: %p, &y: %p\n", &x, &y);

	
	swap(&x, &y);
	printf("x: %d, y: %d\n", x, y);
	printf("after swap, &x: %p, &y: %p\n", &x, &y);
	printf("--------------------------\n\n\n\n");





	return 0;
}


void swap(int* pa, int* pb) {
	int temp;
	
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}



/*
* 값이 복사되어 전달되므로, 원래 x,y값은 변하지 않는다!
void swap(int a, int b) {
	int temp;

	temp = a;
	b = a;
	a = temp;
}
*/