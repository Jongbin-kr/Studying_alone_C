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

	printf("a�� %d\n", a);
	printf("b, c�� %d, %d\n", b,c);
	printf("da�� %lf\n", da);
	printf("ch�� %c\n\n\n", ch);




	//�����ڷ��� char, short, int, long, longlong
	char ch1 = 'A';
	char ch2 = 65;
	char ch3 = -120; // ~127~128

	printf("���� %c�� �ƽ�Ű�ڵ尪 : %d\n", ch1, ch1);
	printf("�ƽ�Ű�ڵ尪�� %d�� ����: %c\n", ch2, ch2);
	printf("%d�� ���ڷδ� %c\n\n\n", ch3, ch3);


	//sizeof
	int ia;
	char ca, bb;

	ia = 41;
	ca = 41;
	
	printf("ia size: %d\n", sizeof(ia));
	printf("ca size: %d\n", sizeof(ca));
	printf("ca size: %c\n", sizeof(ca));


	

	
	//���� �ڷ��� unsigned
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




	//�Ǽ� �ڷ���
	float ft = 1.234567890123456789; //���� �����ϰ� �ٷ� �� �Ҵ絵 �����ϳ�
	double db = 1.234567890123456789;

	printf("ft as f: %.20f\n", ft);
	printf("db as lf: %.20lf\n", db);

	


	//���ڿ� ����
	char fruit[20] = "strawberry";

	printf("����: %s\n", fruit);
	printf("������: %s %s\n", fruit, "jam");

	strcpy(fruit, "apple");
	printf("����: %s\n", fruit);
	printf("������: %s %s\n", fruit, "jam");

	return 0;
}