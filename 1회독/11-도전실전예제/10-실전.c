#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int ch;
	int cnt = 0, maxcnt = 0;

	while (1) {
		ch = getchar();
		
		if (ch == -1) break;
		
		if (ch == '\n') {
			if (cnt > maxcnt) {
				maxcnt = cnt;
				cnt = 0;
				//printf("updated max: %d\n", maxcnt);
			}
			else {
				cnt = 0;
				//printf("prev max: %d\n", maxcnt);
			}
		}
		else {
			cnt++;
			//printf("cnt: %d\n", cnt);
		}

	}

	printf("longest word len : %d", maxcnt);
	




	return 0;
}