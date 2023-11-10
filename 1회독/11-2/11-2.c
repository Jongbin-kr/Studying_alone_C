#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void my_gets(char* str, int size);

int main(void) {
	/*
	//개행문자를 활용한 프로그래밍
	char ch;

	while (1) {
		scanf("%c", &ch);
		if (ch == '\n') break;
		printf("%c", ch);
	}
	*/


	/*
	int res;
	char ch;

	while (1) {
		res = scanf("%c", &ch);
		if (res == -1) break;

		printf("%d ", ch);
	}
	*/

	//getchar
	char str[7];

	my_gets(str, sizeof(str));
	printf("str: %s\n", str);


	//버퍼 내용 지우기
	int num, grade;

	printf("num : ");
	scanf("%d", &num);
	getchar();

	printf("grade : ");
	grade = getchar();
	printf("num: %d, grade: %c\n", num, grade);



	return 0;
}


void my_gets(char* str, int size) {
	int ch;
	int i = 0;

	ch = getchar();

	while ((ch != '\n') && (i < size - 1)){
		str[i] = ch;
		i++;
		ch = getchar();
	}

	str[i] = '\0';
}