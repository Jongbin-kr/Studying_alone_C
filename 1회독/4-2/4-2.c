#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

main() {
	/*
	����ȯ ������
	*/
	int a = 20, b = 3;
	int intres;
	double res;

	res = ((double)a) / ((double)b);
	printf("a = %d, b = %d\n", a, b);
	printf("a/b = res = %.1lf\n\n", res);

	intres = (int)res;
	printf("(int)res = %d\n", intres); 
	printf("res = %.1lf\n\n\n", res); // ���� �Ͻ������θ� �ٲ�°���, ���� �޸𸮿� �ִ� ���� ������ �ʳ�
	



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
	printf("size of 'A': %d\n", sizeof('A')); //�� 4����Ʈ�� ��������? �ƽ�Ű�ڵ�?
	printf("size of A: % d\n", sizeof("A"));
	printf("size of 10+20: %d\n", sizeof(10+20));
	printf("size of 5.5: %d\n", sizeof(5.5));

	char x = 'A';
	printf("d of x = %d\n", x);
	printf("char of x = %c\n", x); 
	printf("size of x = %d\n", sizeof(x)); //���⼭�� 1�� ������




	/*
	���մ��� ������
	 */
	int a3 = 10, b3 = 20;
	int res3 = 2;

	a3 += 20;
	res3 *= b3 + 10;

	printf("a3 += 20: %d\n", a3);
	printf("res *= b + 10: %d\n", res3);


	//�޸� ������
	int ca = 10, cb = 20;
	int result;

	result = (++ca, ++cb);

	printf("a: %d, b: %d\n", ca, cb);
	printf("result: %d\n", result); 

	//���� ������
	int conres;

	//conres = (ca > cb) ? ca : cb;
	(ca > cb) ? (conres = ca) : (conres = cb);
	printf("conres: %d", conres);


	//��Ʈ ������
	int bita = 10, bitb = 12;

	printf("a & b: %d\n", bita & bitb);
	printf("a ^ b: %d\n", bita ^ bitb);
	printf("a | b: %d\n", bita | bitb);
	printf("~a: %d\n", ~bita);
	printf("a << 1: %d\n", bita << 1);
	printf("a >> 2: %d\n", bita >> 2);






	return 0;
}