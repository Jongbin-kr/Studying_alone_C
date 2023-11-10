#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



struct profile {
	char name[20];
	int age;
	double height;
	char* intro;
};

struct student {
	struct profile pf;
	int num;
	double grade;
};

struct person {
	int id;
	char name[20];
	double grade;
};


struct vision {
	double left;
	double right;
};

struct vision exchange(struct vision robot);

int main(void) {

	/*
	struct student s1;

	s1.num = 2;
	s1.grade = 2.7;

	printf("num : %d\n", s1.num);
	printf("grade : %.1lf\n", s1.grade);
	*/


	/*
	struct profile y;
	strcpy(y.name, "¼­ÇÏÀ±");
	y.age = 17;
	y.height = 164.5;

	y.intro = (char*)malloc(80);
	printf("self-introduce : ");
	gets(y.intro);
	// y.intro = "¾È³ç ³»ÀÌ¸§Àº °öµîÀÌ!!!!";

	printf("name: %s\n", y.name);
	printf("age: %d\n", y.age);
	printf("height: %.1lf\n", y.height);
	printf("intro: %s\n\n\n", y.intro);

	free(y.intro);



	struct student yuni;
	yuni.num = 2018;
	yuni.grade = 5.9;
	yuni.pf.age = y.age;

	printf("num: %d\ngrade: %.1lf\nage: %d\n", yuni.num, yuni.grade, yuni.pf.age);
	*/

	struct person s1 = { 315, "Jane", 2.4 },
		s2 = { 316, "John", 3.7 },
		s3 = { 317, "Hoe", 4.4 };


	struct person max;
	max = s1;
	if (s2.grade > max.grade) max = s2;
	if (s3.grade > max.grade) max = s3;

	printf("id: %d\n", max.id);
	printf("name: %s\n", max.name);
	printf("id: %.1lf\n", max.grade);



	//struct vision robot = { 1.2, 2.3 };
	struct vision robot;

	scanf("%lf%lf", &(robot.left), &(robot.right));

	robot = exchange(robot);

	printf("exchanged: % .1lf, % .1lf", robot.left, robot.right);








	return 0;
}



struct vision exchange(struct vision robot) {
	double temp;

	temp = robot.left;
	robot.left = robot.right;
	robot.right = temp;

	return robot;
}