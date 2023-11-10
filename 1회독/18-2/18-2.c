#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {

	/*
	FILE* ifp, * ofp;
	char str[80];
	char* res;

	ifp = fopen("a.txt", "r");
	if (ifp == NULL) {
		printf("NOT OPENDED");
		return 1;
	}

	ofp = fopen("b.txt", "w");
	if (ofp == NULL) {
		printf("NOT OPENDED");
		return 1;
	}


	while (1) {
		res = fgets(str, sizeof(str), ifp);

		if (res == NULL) break;

		str[strlen(str) - 1] = '\0';
		fputs(str, ofp);
		fputs(" ", ofp);
	}

	fclose(ifp);
	fclose(ofp);
	*/

	/*
	//fscanf, fprintf
	FILE* ifp, * ofp;
	char name[20];
	int kor, eng, math, total;
	double avg;
	int res;

	ifp = fopen("c.txt", "r");
	ofp = fopen("d.txt", "w");

	if ((ifp == NULL) || (ofp == NULL)) {
		printf("입력 파일을 열지 못했");
		return 1;
	}

	while (1) {
		res = fscanf(ifp, "%s%d%d%d", name, &kor, &eng, &math);

		if (res == EOF) break;

		total = kor + eng + math;
		avg = total / 3.0;
		fprintf(ofp, "%s%5d%7.1lf\n", name, total, avg);
	}


	fclose(ifp);
	fclose(ofp);
	*/



	/*
	//스트림 버퍼의 문제
	FILE* fp;
	int age;
	char name[20];

	fp = fopen("e.txt", "r");

	fscanf(fp, "%d", &age);
	// fgets(name, sizeof(name), fp);
	fscanf(fp, "%s", name);

	printf("age: %d, name: %s", age, name);
	fclose(fp);
	*/



	// frpintf vs. fwrite
	FILE* afp, * bfp;
	int num = 10, res;

	afp = fopen("x.txt", "wt");
	fprintf(afp, "%d", num);

	bfp = fopen("y.txt", "wb");
	fwrite(&num, sizeof(num), 1, bfp);

	fclose(afp);
	fclose(bfp);

	bfp = fopen("y.txt", "rb");
	fread(&res, sizeof(res), 1, bfp);
	printf("%d", res);

	fclose(bfp);






	return 0;
}