#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int age;
	double height;

	scanf("%d%lf", &age, &height);

	printf("����: %d\n", age);
	printf("Ű: %.1lfcm\n\n\n", height);
	



	// ���ڿ� ���ڿ� �Է�

	char grade;
	char name[20];

	printf("������?");
	scanf("%c", &grade);

	printf("�̸���?");
	scanf("%s", &name);

	printf("����: %d\n", grade);
	printf("�̸�: %s\n", name);

	

	return 0;
}