#include <stdio.h>

int main(){

    int ary[5];


    printf("ary: %d\n", ary);
    printf("&ary: %d\n", &ary);
    printf("ary + 1: %d\n", ary + 1);    //첫번째 요소를 가리킨다
    printf("&ary + 1: %d\n", &ary + 1);  // 배열 전체를 가리킨다

    printf("\n");


    int* p_ary = ary;
    int ad_ary = ary;
    
    printf("p_ary: %d\n", p_ary);
    printf("ad_ary: %d\n", ad_ary);
    printf("p_ary + 1: %d\n", p_ary + 1);  //주소값의 연산이므로 + 4
    printf("ad_ary + 1: %d\n", ad_ary + 1);  // 그냥 int의 연산이므로 +1

    return 0;
}