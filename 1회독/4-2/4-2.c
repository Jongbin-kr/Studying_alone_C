#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

main() {
	/*
	형변환 연산자
	*/
	int a = 20, b = 3;
	int intres;
	double res;

	res = ((double)a) / ((double)b);
	printf("a = %d, b = %d\n", a, b);
	printf("a/b = res = %.1lf\n\n", res);

	intres = (int)res;
	printf("(int)res = %d\n", intres); 
	printf("res = %.1lf\n\n\n", res); // 값이 일시적으로만 바뀌는거지, 원래 메모리에 있는 값은 변하지 않네
	



	/*
	size of
	*/

	int n = 10;
	double d = 3.4;

	printf("size of res: %d\n", sizeof(res));
	printf("size of intres: %d\n", sizeof(intres));
	printf("size of int n: %d\n", sizeof(n));
	printf("size of double b: %d\n", sizeof(d));
	printf("size of char datatype: %d\n", sizeof(char));
	printf("size of 10: %d\n", sizeof(10));
	printf("size of 'A': %d\n", sizeof('A')); //왜 4바이트를 차지하지? 아스키코드?
	printf("size of A: % d\n", sizeof("A"));
	printf("size of 10+20: %d\n", sizeof(10+20));
	printf("size of 5.5: %d\n", sizeof(5.5));

	char x = 'A';
	printf("d of x = %d\n", x);
	printf("char of x = %c\n", x); 
	printf("size of x = %d\n", sizeof(x)); //여기서는 1로 나오네




	/*
	복합대입 연산자
	 */
	int a3 = 10, b3 = 20;
	int res3 = 2;

	a3 += 20;
	res3 *= b3 + 10;

	printf("a3 += 20: %d\n", a3);
	printf("res *= b + 10: %d\n", res3);


	//콤마 연산자
	int ca = 10, cb = 20;
	int result;

	result = (++ca, ++cb);

	printf("a: %d, b: %d\n", ca, cb);
	printf("result: %d\n", result); 

	//조건 연산자
	int conres;

	//conres = (ca > cb) ? ca : cb;
	(ca > cb) ? (conres = ca) : (conres = cb);
	printf("conres: %d", conres);


	//비트 연산자
	int bita = 10, bitb = 12;

	printf("a & b: %d\n", bita & bitb);
	printf("a ^ b: %d\n", bita ^ bitb);
	printf("a | b: %d\n", bita | bitb);
	printf("~a: %d\n", ~bita);
	printf("a << 1: %d\n", bita << 1);
	printf("a >> 2: %d\n", bita >> 2);






	return 0;
}