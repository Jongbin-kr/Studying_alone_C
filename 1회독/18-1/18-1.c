#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {


	/*
	FILE* fp;
	int ch;

	fp = fopen("a.txt", "r");

	if (fp == NULL) {
		printf("NOT OPEN!!!!");
		return 1;
	}

	while (1) {
		ch = fgetc(fp);

		if (ch == EOF) {
			break;
		}
		putchar(ch);
		
	}

	fclose(fp);
	*/

	/*
	FILE* fp;
	char str[] = "banana";
	

	fp = fopen("c.txt", "w");

	if (fp == NULL) {
		printf("file not made!!!!");
		return 1;
	}

	
	int i = 0;
	while (str[i] != '\0') {
		fputc(str[i], fp);
		i++;
	}

	fputc('\n', fp);
	fclose(fp);
	*/


	/*
	int ch;

	while (1) {
		ch = getchar();

		if (ch == EOF) {
			break;
		}
		putchar(ch);
	}
	*/



	/*
	//파일의 형태와 개방 모드가 다른 경우
	FILE* fp;
	int arr[10] = { 13, 10, 13, 13, 10, 26, 13, 10, 13, 10 };
	int i, res;

	fp = fopen("d.txt", "wb");
	for (i = 0; i < 10; i++) {
		fputc(arr[i], fp);
	}
	fclose(fp);


	fp = fopen("d.txt", "rt");
	while (1) {
		res = fgetc(fp);
		if (res == EOF) break;
		printf("%4d", res);
	}
	fclose(fp);
	*/



	FILE* fp;
	char str[20];

	fp = fopen("e.txt", "a+");
	if (fp == NULL) {
		printf("파일을 만들지 못했");
		return 1;
	}

	while (1) {
		printf("fruit : ");
		scanf("%s", str);
		
		if (strcmp(str, "end") == 0) {
			break;
		}

		else if (strcmp(str, "list") == 0) {
			fseek(fp, 0, SEEK_SET);
			while (1) {
				fgets(str, sizeof(str), fp);
				if (feof(fp)) {
					break;
				}
				printf("%s", str);

			}
		}
		else {
			fprintf(fp, "%s\n", str);
		}
	}
	fclose(fp);













	return 0;
}