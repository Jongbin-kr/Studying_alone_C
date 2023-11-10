#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

main(void) {
	/*
	int arr[5];

	arr[0] = 10;
	arr[1] = 20;
	arr[2] = arr[0] + arr[1];

	printf("arr[3]값 입력");
	scanf("%d", &arr[3]);

	printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);


	// 배열의 초기화
	int arr2[5] = { 0 };
	printf("%d %d %d %d %d\n", arr2[0], arr2[1], arr2[2], arr2[3], arr2[4]);

	int arr3[] = { 1, 2, 3, 4 };
	printf("%d %d %d %d\n\n", arr3[0], arr3[1], arr3[2], arr3[3]);

	printf("size of: %d %d %d\n\n\n", sizeof(arr), sizeof(arr2), sizeof(arr3));


	*/

	/*
	// sizeof 연산자를 사용한 배열

	int score[5];
	int i;
	int total = 0;
	double avg;
	int count;

	count = sizeof(score) / sizeof(score[0]);

	for (i = 0; i < count; i++) {
		scanf("%d", &score[i]);
	}

	for (i = 0; i < count; i++) {
		total += score[i];
	}
	printf("total: %d\n", total);


	avg = (double)total / (double)count;

	

	for (i = 0; i < count; i++) {
		printf("score[%d]: %d\n", i, score[i]);
	}

	printf("avg: %.1lf\n", avg);
	*/


	
	//문자를 저장하는 배열
	char str[10] = "moon";
	scanf("%c", &str[0]);
	printf("%s\n", str);

	//문자열 대입 strcpy
	char str2[10] = "cathouse";
	
	strcpy(str, str2);
	printf("%s\n\n\n", str);

	//gets, puts
	char string[80];
	gets(string);
	puts(string); //왜 안되나~~~~
	
	printf("끝났나?");
	

	/*
	int i;
	int cnt = 0;
	char str[80];

	printf("문장 입력: ");
	gets(str);

	for (i = 0; i != '\n'; i++) {

		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] += 'a' - 'A';
			cnt++;
		}

	}

	printf("바뀐 문장: ");
	puts(str);

	printf("바뀐 문자 수: %d", cnt);
	
	*/

	return 0;
}


//실전예제 다른풀이
		/*
		// for 안에 이런식으로 노가다를 뛰어도 되지만..
		switch (str[i]) {
		case 'A':
			str[i] = 'a';
			break;
		case 'B':
			str[i] = 'b';
			break;
		case 'C':
			str[i] = 'c';
			break;
		case 'D':
			str[i] = 'd';
			break;
		case 'E':
			str[i] = 'e';
			break;
		case 'F':
			str[i] = 'f';
			break;
		case 'G':
			str[i] = 'g';
			break;
		case 'H':
			str[i] = 'h';
			break;
		default:
			break;
		}

		
		*/