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

	//중첩문 if문에서 중괄호가 반드시 필요한 경우
	int c = -5, d = 15;
	if (c > 0) {
		if (d > 20) {
			printf("c>0, d>20\n");
		}
	}
	else {
		printf("c<=0\n");
	}


	//switch문
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
	//실전예제
	int x, y, xy_result;
	char oper;

	printf("사칙연산 입력(정수): ");
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