#include <stdio.h>

struct score {
	int kor;
	int eng;
	int math;
};


struct address {
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};

struct list {
	int num;
	struct list* next;
};


union man {
	int id;
	double grade;
};

enum season {spring, summer, fall, winter = 5};





void print_list(struct address* lp);


int main(void) {
	/*
	struct score yuni = { 90, 80, 70 };
	struct score* ps = &yuni;

	printf("kor : %d\n", (*ps).kor);
	printf("eng : %d\n", ps->eng);
	printf("math : %d\n", ps->math);



	struct address list[3] = {
		{"jion", 23, "111-1111", "chcago"},
		{"ajlg", 30, "123-1246", "seoul"},
		{"alex", 40, "180-1806", "rome"}
	};

	int i;
	for (i = 0; i < 3; i++) {
		printf("%10s%5d%15s%10s\n",
			list[i].name, list[i].age, list[i].tel, list[i].addr);
	}
	printf("\n\n\n");




	print_list(list);
	*/


	/*
	//자기 참조 구조체 => 연결 리스트
	struct list a = { 10, 0 }, b = { 20, 0 }, c = { 30, 0 };
	struct list* head = &a;
	struct list* current;

	a.next = &b;
	b.next = &c;

	printf("head->num : %d\n", head->num);
	printf("head->num : %d\n", (*head).num);
	printf("head->next->num : %d\n", head->next->num);


	printf("list all : ");
	current = head;

	while (current != NULL) {
		printf("%d ", current->num);
		current = current->next;
	}
	printf("\n");
	*/


	//공용체
	union man m1 = { 315 };

	printf("id : %d\n", m1.id);
	
	m1.grade = 4.4;
	printf("grade : %.1lf\n", m1.grade);
	printf("id again : %d\n", m1.id);


	//열거형
	enum season ss;
	char* ps = NULL;

	ss = winter;
	switch (ss) {
	case spring:
		ps = "inline"; break;
	case summer:
		ps = "swimming"; break;
	case fall:
		ps = "trip"; break;
	case winter:
		ps = "skiing"; break;
	}


	printf("my leisure : %s\n", ps);
	printf("spring as d: %d", ss);


	return 0;
}


void print_list(struct address* lp) {
	
	int i;
	for (i = 0; i < 3; i++) {
		
		printf("%10s%5d%15s%10s\n",
			(lp[i]).name, (lp + i)->age, (*(lp + i)).tel, (lp + i)->addr);
	}
}