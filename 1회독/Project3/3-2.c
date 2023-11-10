#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int age;
	double height;

	scanf("%d%lf", &age, &height);

	printf("나이: %d\n", age);
	printf("키: %.1lfcm\n\n\n", height);
	



	// 문자와 문자열 입력

	char grade;
	char name[20];

	printf("학점은?");
	scanf("%c", &grade);

	printf("이름은?");
	scanf("%s", &name);

	printf("학점: %d\n", grade);
	printf("이름: %s\n", name);

	

	return 0;
}