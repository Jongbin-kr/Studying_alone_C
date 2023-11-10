#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(char* type, void* pa, void* pb);

int main(voio) {

	void* a;
	void* b;
	swap("int", &a, &b);
	swap("int", &a, &b);



	return 0;
}

void swap(char[20] type, void* pa, void* pb) {
	void* temp;
	
	
	temp = (type *)pa;

}