#include <stdio.h> //��ó�� �ܰ�. 

int main(void)
{
	//����ڸ� �Ẹ��
	printf("Be happy!\n");
	printf("My\tfriend\n");
	printf("Goot\bd\tchance\n");
	printf("Cow\rW\a\n");

	printf("ABC\r123\n");

	//  ����, �Ǽ� ���
	printf("%d\n", 10);
	printf("%lf\n", 3.2);
	printf("%-10.10lfIsThisEnd?\n", 3.7512);

	//���� ǥ���
	printf("%d\n", 12);
	printf("%d\n", 014);
	printf("%d\n", 0xc);

	//10������ �ٸ� ������ ǥ��
	printf("%o\n", 12);
	printf("%x\n", 12);
	printf("%X\n", 12);

	//����ȭ ǥ���
	printf("%5.5lf\n", 3.14e-5);
	printf("%5.5le\n", 0.000314);

	//���ڿ� ���ڿ��� ����
	sizeof('A');
	sizeof("A");




	return 0;
}