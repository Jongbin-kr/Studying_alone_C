#include <stdio.h>

int main(){
	/*
	int a;
	scanf("%d", &a);

	if (a > 100) {
		printf("%d > 100", a);
	}else if (a > 10) {
		printf("%d > 10\n", a);
	}
	else {
		printf("%d <= 10\n\n", a);
	}

	//��ø�� if������ �߰�ȣ�� �ݵ�� �ʿ��� ���
	int c = -5, d = 15;
	if (c > 0) {
		if (d > 20) {
			printf("c>0, d>20\n");
		}
	}
	else {
		printf("c<=0\n");
	}


	//switch��
	int love = 2;

	switch (love) {
	case 1:
		printf("1.0");
		break;

	case 2:
		printf("2.0");
		break;

	default:
		break;
	}
	*/
	//��������
	int x, y, xy_result;
	char oper;

	printf("��Ģ���� �Է�(����): ");
	scanf("%d%c%d", &x, &oper, &y);
	// printf("x: %d, y: %d, oper: %c", x, y, oper);

	switch (oper)
	{
	case '+':
		xy_result = x + y;
		break;
	case '*':
		xy_result = x * y;
		break;
	case '-':
		xy_result = x - y;
		break;
	case '/':
		xy_result = x / y;
		break;
	default:
		break;
	}

	printf("%d %c %d = %d", x, oper, y, xy_result);




	return 0;
}