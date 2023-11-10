#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_str(char** ps);

int main(int argc, char** argv) {

	/*
	char temp[80];
	char* str[3];
	int i;

	for (i = 0; i < 3; i++) {
		printf("input: ");
		gets(temp);
		
		str[i] = (char*)malloc(strlen(temp) + 1);
		strcpy(str[i], temp);
	}


	for (i = 0; i < 3; i++) {
		printf("%s\n", str[i]);
		free(str[i]);
	}
	*/

	/*
	//동적 할당을 함수로 처리하기
	char temp[80];
	char* str[21] = { 0 };
	
	int i = 0;
	while (i < 20) {
		printf("input : ");
		gets(temp);

		if (strcmp(temp, "end") == 0) break;

		str[i] = (char*)malloc(strlen(temp) + 1);

		strcpy(str[i], temp);
		i++;
	}
	print_str(str);


	for (i = 0; str[i] != 0; i++) {
		free(str[i]);
	}
	*/


	int i;
	for (i = 0; i < argc; i++) {
		printf("%s\n", argv[i]);
	}






	return 0;
}

void print_str(char** ps) {
	while (*ps != NULL) {
		printf("%s\n", *ps);
		ps++;
	}


}