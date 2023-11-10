#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

main() {
	int weight;
	double height, BMI;

	printf("몸무게(kg)과 키(cm) 입력: ");
	scanf_s("%d%lf", &weight, &height);

	BMI = weight / (height * height);

	printf("%s", (BMI >= 20.0 && BMI <= 25.00) ? ("표준입니다.") : ("체중관리가 필요합니다"));

	return 0;
}