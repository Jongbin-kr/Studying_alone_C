#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int sum(int x, int y);  
// �Լ��� ���� �������� ���� ���, �����Ϸ��� ������� int������ �����Ѵ�. -> �Լ��� �⺻��ȯ���� int��!
// ���� ������� ������ Ÿ���� int���� ��쿡�� ���� �� �Լ��� �������� �ʾƵ� ������. 
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


	// Ȯ�ι���1
	double res;
	res = average(1.5, 3.4);




	//�Ű������� ���� �Լ�
	int result2;

	result2 = get_num();
	printf("result2: %d\n\n", result2);
	

	//��ȯ���� ���� �Լ�
	print_char('@', 5);
	printf("\n\n\n");



	// ���ȣ���Լ�
	fruit(1);
	
	*/



	//��������-1~10���� ��. ���ȣ�� ���

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
	printf("��� �Է�: ");
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
	fruit(i + 1); //�ڱ� �ڽ��� �ٽ� ȣ��
	printf("jam\n");

}
*/

int rec_func(int n) {
	
	if (n == 1) return 1;
	else return (n + rec_func(n - 1));
}