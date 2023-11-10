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




	// �������� ����� ���
	int *pa;

	pa = &a; //�����Ϳ� a�� �ּҰ��� �����ϰ�
	*pa = 10; //�����ͷ� ���� a�� 10�� �����Ѵ�

	printf("�����ͷ� a�� ��� *pa: %d\n", *pa);
	printf("���������� a�� ��� a: %d\n", a);
	printf("������ ��ü �� pa: %p\n", pa);
	printf("*pa == a: %d\n", *pa == a);


	// �����͸� �̿��� �� ������ �հ� ���
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


	//�ּҿ� �������� ����
	int* p;
	p = &x;
	printf("*p :%d\n", *p);

	p = &y;
	printf("*p: %d\n\n\n", *p);




	//�ּҿ� �������� ũ��
	printf("size of *p: %d\n", sizeof(*p));
	printf("size of &y: %d\n", sizeof(&y));
	printf("size of p: %d\n\n\n", sizeof(p));  //�ּҿ� �������� ũ��� ����������, ���������� �� ���� ���� ũ��� �翬�� �ٸ�����

	*/


	//�������� ���԰� �ڷ���
	int a = 10;
	int* p = &a;
	double* pd;
	int* pp;

	pd = p;
	pp = p;
	printf("pd = p -> *pd: %lf\n", *pd);
	printf("pp = p -> *pp: %d\n\n\n", *pp);



	//����ȯ�� ����� �������� ����
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



	// �� ������ ���� �ٲٸ� ������ �����ϱ�
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
* ���� ����Ǿ� ���޵ǹǷ�, ���� x,y���� ������ �ʴ´�!
void swap(int a, int b) {
	int temp;

	temp = a;
	b = a;
	a = temp;
}
*/