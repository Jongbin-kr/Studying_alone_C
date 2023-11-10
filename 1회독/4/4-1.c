#include <stdio.h>

int main() {
	int a, b;
	int sum, sub, mul, inv;

	a = 10;
	b = 20;

	sum = a + b;
	sub = a - b;
	mul = a * b;
	inv = -a;

	printf("a: %d\n", a);
	printf("b: %d\n", b);
	printf("sum: %d\n", sum);
	printf("mul: %d\n", mul);
	printf("inv: %d\n\n\n", inv);
	

	//나누기 연산
	double aaa;
	int bbb, ccc;
	
	aaa = 5.0 / 2.0;
	bbb = 5 / 2;
	ccc = 5 % 2;

	printf("aaa: %.1lf\n", aaa);
	printf("bbb: %d\n", bbb);
	printf("ccc: %d\n\n\n", ccc);


	//증감 연산자
	++a;
	--b;

	printf("++a: %d\n", a);
	printf("--b: %d\n", b);


	////전위 표기와 후위 표기
	int c, pre, post;
	c = 10;

	printf("c: %d\n", c);
	pre = (++c) * 3;
	printf("c: %d\n", c);
	post = (c++) * 3;
	printf("c: %d\n\n", c);

	printf("++c: %d\n", pre);
	printf("c++: %d\n", post);
	printf("c: %d\n\n\n", c);



	//논리 연산자
	int res;
	a = 30;

	res = (a > 10) && (a < 20);
	printf("a>10 and a < 20 : %d\n", res); //불값도 \d으로 받는구나...

	res = (a < 10) || (a > 20);
	printf("a>10 or a < 20 : %d\n", res);

	res = !(a >= 30);
	printf("a not >= 30: %d\n\n\n\n", res);


	//연습문제
	int kor, eng, mat, credits;
	double kscore, escore, mscore, grade;
	int res2;

	kor = 3;
	eng = 5;
	mat = 4;

	credits = kor + eng + mat;

	kscore = 3.8;
	escore = 4.4;
	mscore = 3.9;

	grade = (kscore + escore + mscore) / 3;

	res2 = (credits >= 10) && (grade >= 4.0);

	printf("%d", res2);


	return 0;
}