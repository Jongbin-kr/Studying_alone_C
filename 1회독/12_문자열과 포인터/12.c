#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char* my_strcpy(char* pd, char* ps);


int main(void) {
	/*
	printf("apple address: %p\n", "apple");
	printf("apple +1 address: %p\n", "apple" + 1);

	printf("first letter: %c\n", *"apple");
	printf("second letter: %c\n", *("apple" + 1));

	printf("apple[2]: %c\n\n\n", "apple"[2]);


	//scanf�� �̿��� ���ڿ� �Է�
	char str[80];
	printf("���ڿ� �Է�: \n");
	scanf("%s", str);
	printf("ù���� �ܾ�: %s\n", str);
	scanf("%s", str);
	printf("���ۿ� �����ִ� �ι�° �ܾ�: %s\n\n", str);
	
	fgetc(stdin);

	printf("������ ���Ե� ���ڿ� �Է�: ");
	
	fgets(str, sizeof(str), stdin);
	str[strlen(str) - 1] = '\0'; //���ʿ��� ���๮���� ó��

	//gets(str); //���๮�ڸ� �ٷ� �ι��ڷ�
	
	// ���
	//printf("�Է��� ���ڿ��� %s�Դϴ�.", str);
	puts(str);
	fputs(str, stdout);
	puts("milk");
	printf("end");
	*/



	/*
	//gets�Լ� ����
	int i = 0;
	char st[20];
	char ch;

	do {
		ch = getchar();
		st[i] = ch;
		i++;
	} while (ch != '\n');

	st[i-1] = '\0';

	printf("gets ����: %s", st);
	*/



	/*
	char* pstr = "applepie";
	pstr += 5;

	printf("%s", pstr);
	*/




	/*
	//char and char* -> �׳� �Ϲ� �迭�ٷ�°Ŷ� ����Ѱ� �ƴѰ�? ��� �迭���� �ּҰ��̴�.
	char str[20] = "H'll kill you";
	char* ps = str;
	char* pp = "I'll love you";

	printf("str: %p\n", str); // ù ������ �ּҰ�
	printf("ps: %p\n", ps);
	printf("pp: %p\n", pp);


	printf("*str: %c\n", *str); //ù ������ ��
	printf("*ps: %c\n", *ps);
	printf("*pp: %c\n", *pp);

	
	printf("str as s: %s\n", str);
	printf("ps as s: %s\n", ps);
	printf("pp as s: %s\n", pp);

	printf("str[2]: %c\n", str[2]);
	printf("*(ps+2): %c\n", *(ps + 2));
	printf("*(pp+2): %c\n", *(pp + 2));
	*/


	/*
	char str1[80] = "strawberry";
	printf("str1: %s\n\n", str1);

	strcpy(str1, "pear");
	printf("strcpy str1: %s\n", str1);





	char* pstr = str1;

	printf("pstr: %s\n", pstr);
	printf("pstr: %p\n", pstr);

	//pstr = "clamanda";
	//printf("cla pstr: %s\n", pstr);
	//printf("cla pstr: %p\n", pstr);

	strcpy(pstr, "virus");
	printf("strcpy pstr: %s\n", pstr);
	printf("strcpy pstr: %p\n", pstr);
	*/


	/*
	// strncpy�� �ι���
	char fruit[20] = "mango tree";

	strncpy(fruit, "apple", 5);
	fruit[5] = '\0';
	printf("strncpy fruit: %s\n", fruit);
	printf("fruit[6]: %c\n", fruit[6]);
	printf("fruit[7]: %c\n\n", fruit[7]);


	//strcat
	strcat(fruit, "man");
	printf("strcat fruit: %s\n", fruit);

	strncat(fruit, "love you", 4);
	printf("strncat fruit: %s\n\n", fruit);

	
	//strlen
	printf("strlen: %d\n\n", strlen(fruit));


	//strcmp
	char str1[80] = "pear";
	char str2[80] = "peach";

	if (strcmp(str1, str2) > 0) {
		printf("%s\n", str1);
	}
	else {
		printf("%s\n", str2);
	}
	*/


	/*
	//strcpy �����ϱ�
	

	char str[80] = "strawberry";

	printf("str: %s\n", str);
	
	my_strcpy(str, "apple");
	printf("str: %s\n", str);

	my_strcpy(str, "kiwi");
	printf("str: %s\n", str);
	*/





	//5 �̻� *
	
	int i = 5;
	char str[80];
	char new_str[80];
	

	printf("�ܾ� �Է� : ");

	gets(str);
	strcpy(new_str, str);

	if (strlen(str) >= 5) {
		while (*str != '\0') {
			new_str[i] = '*';
		}
	}

	printf("�Է��� �ܾ�: %s, ������ �ܾ�: %s", str, new_str);

	


	return 0;
}

char* my_strcpy(char* pd, char* ps) {
	
	while (*ps != '\0') {
		*pd = *ps;
		pd++;
		ps++;
	}
	*pd = '\0';

	return pd;
}