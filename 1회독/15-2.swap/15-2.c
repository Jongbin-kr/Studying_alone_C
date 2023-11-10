#include <stdio.h>

void swap(char* pa, char* pb);

int main(void) {

	char a[20] = "success";
	char b[20] = "failure";

	printf("a: %s, b: %s\n", a, b);
	swap(a, b);
	printf("a: %s, b: %s\n", a, b);




	return 0;
}


void swap(char* pa, char* pb) {
	char* temp;

	temp = pa;
	pa = pb;
	*pb = temp;

}