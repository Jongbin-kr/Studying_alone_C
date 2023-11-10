#include <stdio.h>

void input_data(int* pa, int* pb);
void swap_data(void);
void print_data(int a, int b);

int a, b;

int main(void) {
	input_data(&a, &b);
	swap_data();
	print_data(a, b);
}

void input_data(int* pa, int* pb) {
	printf("두 정수 입력 : ");
	scanf("%d%d", pa, pb);
}


void swap_data(void) {
	int* temp;
	// static int *pa = &a, pb = &b;

	temp = a;
	a = b;
	b = temp;
	

}


void print_data(int a, int b) {
	printf("두 정수 출력 : ");
	printf("%d, %d", a, b);
}
