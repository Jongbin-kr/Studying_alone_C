#include <stdio.h>

int main(){

    char arr[3][4] = {{'a','b','c','d'}, {'e','f','g','h'}, {'i','j','k','l'}};

    printf("arr: %d\n", arr); // 첫번쨰 부분배열의 주소
    printf("arr+1: %d\n", arr+1); //두번째 부분배열 전체를 가리키는 주소.
    printf("*(arr+1): %d\n", *(arr+1)); // 두번쨰 부분배열의 첫번쨰 요소를 가리키는 주소. 
                                        //이게 여전히 주소값이네????
    printf("*(arr+1)+2: %d\n", *(arr+1)+2); // 두번쨰 부분배열의 세번째 요소를 가리키는 주소
    printf("*(*(arr+1)+2): %d\n", *(*(arr+1)+2)); // 두번쨰 부분배열의 세번째 요소를 가리키는 주소의 값

    printf("\n");

    printf("arr: %d\n", arr);
    printf("&arr: %d\n", &arr);
    printf("arr[0]: %d\n", arr[0]);
    printf("&arr[0]: %d\n", &arr[0]);
    printf("arr[0][0]: %d\n", arr[0][0]);
    printf("&arr[0][0]: %d\n", &arr[0][0]);

    printf("\n");

    printf("arr + 1: %d\n", arr+ 1);
    printf("&arr+ 1: %d\n", &arr+ 1);
    printf("arr[0]+ 1: %d\n", arr[0]+ 1);
    printf("&arr[0]+ 1: %d\n", &arr[0]+ 1);
    printf("arr[0][0]+ 1: %d\n", arr[0][0]+ 1);
    printf("&arr[0][0]+ 1: %d\n", &arr[0][0]+ 1);

    return 0;
}