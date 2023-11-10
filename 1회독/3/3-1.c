#include <stdio.h>

int main()
{
	int a;
	int b, c;
	double da;
	char ch;
	
	a = 10;
	b = 10;
	c = 20;
	da = 3.5;
	ch = 'A';

	printf("a는 %d\n", a);
	printf("b, c는 %d, %d\n", b,c);
	printf("da는 %lf\n", da);
	printf("ch는 %c\n\n\n", ch);




	//정수자료형 char, short, int, long, longlong
	char ch1 = 'A';
	char ch2 = 65;
	char ch3 = -120; // ~127~128

	printf("문자 %c의 아스키코드값 : %d\n", ch1, ch1);
	printf("아스키코드값이 %d인 문자: %c\n", ch2, ch2);
	printf("%d는 문자로는 %c\n\n\n", ch3, ch3);


	//sizeof
	int ia;
	char ca, bb;

	ia = 41;
	ca = 41;
	
	printf("ia size: %d\n", sizeof(ia));
	printf("ca size: %d\n", sizeof(ca));
	printf("ca size: %c\n", sizeof(ca));


	

	
	//정수 자료형 unsigned
	unsigned int u;
	u = 4294967295;
	printf("unsigned int u as d: %d\n", u);

	u = -1;
	printf("unsigned int u as u: %u\n", u);

	u = 14251462;
	printf("unsigned int u as c: %c\n", u);


	char cccc;
	cccc = 120;
	printf("cccc as char: %c\n", cccc);
	printf("cccc as deci: %d\n\n\n", cccc);




	//실수 자료형
	float ft = 1.234567890123456789; //변수 선언하고 바로 값 할당도 가능하네
	double db = 1.234567890123456789;

	printf("ft as f: %.20f\n", ft);
	printf("db as lf: %.20lf\n", db);

	


	//문자열 저장
	char fruit[20] = "strawberry";

	printf("과일: %s\n", fruit);
	printf("과일잼: %s %s\n", fruit, "jam");

	strcpy(fruit, "apple");
	printf("과일: %s\n", fruit);
	printf("과일잼: %s %s\n", fruit, "jam");

	return 0;
}