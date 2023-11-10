#include <stdio.h>
#include <stdlib.h>

void print_str(char**pps, int cnt);
void print_int(int** pps, int cnt);

int main(){

    /*
    문자열의 경우는 이렇게 되는데
    char *ptr_ary[] = {"eagle", "tiger", "lion"};
    int count;

    count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
    print_str(ptr_ary, count);
    */


    //숫자형 배열이면?
    int n;

    printf("how many input?: ");
    scanf("%d", &n); // input count
    int* p_arr = (int *)malloc(5 * sizeof(int)); //allocate memory as many as input count
    
    int i;
    for (i = 0; i < n; i++){ //input values.
        scanf("%d", p_arr+i);
    }

    printf("print p_arr: ");
    for (i = 0; i < n; i++){
        printf("%d ", p_arr[i]);
    }
    printf("\n\n\n");



    print_int(&p_arr, n);

    return 0;
}

void print_str(char **pps, int cnt){
    int i;

    for (i = 0; i < cnt; i++){
        printf("%s\n", pps[i]);

    }

}

void print_int(int** ppa, int cnt){

    int i;
    for (i = 0; i < cnt; i++){
        // ppa[i] = 0;
        printf("%d\n", ppa[i]);
    }

    printf("\n\n\n");
    
    for (i = 0; i < cnt; i++){
        // ppa[i] = 0;
        printf("%d\n", *ppa[i]);
    }
}