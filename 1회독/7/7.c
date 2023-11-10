#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int sum(int x, int y);  
// 함수를 먼저 선언하지 않은 경우, 컴파일러는 결과값을 int형으로 간주한다. -> 함수의 기본반환형이 int다!
// 따라서 결과값의 데이터 타입이 int형인 경우에는 굳이 꼭 함수를 선언하지 않아도 괜찮다. 
double average(double x, double y);
//int get_num(void);
void print_char(char ch, int count);
void fruit(void);

int rec_func(int n);



int main(void) {
	/*
	int a = 10, b = 20;
	int result;

	result = sum(a, b);
	printf("result: %d\n\n", result);


	// 확인문제1
	double res;
	res = average(1.5, 3.4);




	//매개변수가 없는 함수
	int result2;

	result2 = get_num();
	printf("result2: %d\n\n", result2);
	

	//반환값이 없는 함수
	print_char('@', 5);
	printf("\n\n\n");



	// 재귀호출함수
	fruit(1);
	
	*/



	//실전예제-1~10까지 합. 재귀호출 사용

	printf("rec_func(10): %d", rec_func(10));



	return 0;
}



/*
int sum(int x, int y) {
	int temp;
	
	temp = x + y;

	return temp;  //return (x + y);
}

double average(double x, double y) {
	double temp;
	temp = x + y;
	return temp / 2.0;
}

int get_num(void) {
	int num;
	printf("양수 입력: ");
	scanf("%d", &num);

	return num;
}


void print_char(char ch, int count) {
	int i;

	for (i = 0; i < count; i++) {
		printf("%c", ch);
	}
}


void fruit(int i) {
	printf("apple\n");
	if (i == 3) return;
	printf("juice\n");
	fruit(i + 1); //자기 자신을 다시 호출
	printf("jam\n");

}
*/

int rec_func(int n) {
	
	if (n == 1) return 1;
	else return (n + rec_func(n - 1));
}