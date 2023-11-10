#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(double* pa, double* pb);
void line_up(double* pa, double* pb, double* pc);


int main() {

	double max, mid, min;

	printf("실수값 3개 입력: ");
	scanf("%lf%lf%lf", &max, &mid, &min);
	line_up(&max, &mid, &min);

	printf("정렬된 값 출력: %lf, %lf, %lf", max, mid, min);

	return 0;
}


void swap(double* pa, double* pb) {
	double temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;

}




void line_up(double* pmax, double* pmid, double* pmin) {
	if (*pmax < *pmid) {
		swap(pmax, pmid);
	}

	if (*pmax < *pmin) {
		swap(pmax, pmin);
	}

	if (*pmid < *pmin) {
		swap(pmid, pmin);
	}


}