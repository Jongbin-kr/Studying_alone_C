#include <stdio.h>

struct score{
    int kor;
    int eng;
    int math;
}; //구조체 선언 뒤에는 신기하게 ;를 찍어야하네???

int main(){
    
    struct score yuni = {90, 90, 70};
    struct score *ps = &yuni;

    printf("kor: %d\n", (*ps).kor);
    printf("eng: %d\n", ps->eng);
    printf("math: %d\n", ps->math);



    return 0;
}

