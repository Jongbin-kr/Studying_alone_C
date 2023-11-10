#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "student.h"

#define PI 3.141592
#define LIMIT 100.0
#define MSG "passed!"
#define ERR_PRN printf("Çã¿ë¹üÀ§¸¦ ¹þ¾î³µ!")

#define SUM(a, b) ((a) + (b))
#define MUL(a, b) ((a) * (b))

#define NAME_CAT(x, y) (x ## y)
#define PRINT_EXPR(x) printf(#x " = %d", x)

#define VER 7
#define BIT16


int main(void) {

	/*
	Student a = { 315, "È«±æµ¿" };

	printf("id: %d, name: %s\n", a.num, a.name);
	*/


	/*
	double radius, area;
	printf("input radius: ");
	scanf("%lf", &radius);

	area = PI * radius * radius;

	if (area > LIMIT) ERR_PRN;
	else printf("area: %.2lf.  %s\n", area, MSG);



	int a = 10, b = 20, x = 30, y = 40;
	int res;

	printf("sum(a, b) = %d\n", SUM(a, b));
	printf("MUL(x, y) = %d\n", MUL(x, y));

	res = 30 / MUL(2, 5);

	printf("res: %d\n", res);
	*/




	

	printf("__DATE__, __TIME__: %s, %s\n\n", __DATE__, __TIME__);
	printf("file: %s\n", __FILE__);
	printf("function name: %s\n", __FUNCTION__);
	printf("line num: %d\n", __LINE__);
	printf("\n\n\n");

	
	
	
	int a1, a2;

	NAME_CAT(a, 1) = 10;
	NAME_CAT(a, 2) = 20;
	PRINT_EXPR(a1 + a2);
	printf("\n\n\n");



	int max;

	#if VER >= 7
		printf("version: %d\n", VER);
	#endif

	#ifdef BIT16
		max = 32767;
	#else
		max = 2147483467;
	#endif

		printf("int max: %d\n", max);


	return 0;
}