#include <stdio.h> //전처리 단계. 

int main(void)
{
	//제어문자를 써보자
	printf("Be happy!\n");
	printf("My\tfriend\n");
	printf("Goot\bd\tchance\n");
	printf("Cow\rW\a\n");

	printf("ABC\r123\n");

	//  정수, 실수 출력
	printf("%d\n", 10);
	printf("%lf\n", 3.2);
	printf("%-10.10lfIsThisEnd?\n", 3.7512);

	//진수 표기법
	printf("%d\n", 12);
	printf("%d\n", 014);
	printf("%d\n", 0xc);

	//10진수를 다른 진수로 표시
	printf("%o\n", 12);
	printf("%x\n", 12);
	printf("%X\n", 12);

	//정규화 표기법
	printf("%5.5lf\n", 3.14e-5);
	printf("%5.5le\n", 0.000314);

	//문자와 문자열의 차이
	sizeof('A');
	sizeof("A");




	return 0;
}