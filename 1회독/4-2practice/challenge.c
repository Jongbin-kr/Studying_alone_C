#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

main() {
	int weight;
	double height, BMI;

	printf("������(kg)�� Ű(cm) �Է�: ");
	scanf_s("%d%lf", &weight, &height);

	BMI = weight / (height * height);

	printf("%s", (BMI >= 20.0 && BMI <= 25.00) ? ("ǥ���Դϴ�.") : ("ü�߰����� �ʿ��մϴ�"));

	return 0;
}