#include <stdio.h>

int main(void) {
    int value1;

    value1 = 11;

    value1++;
    printf("value1           : %d\n", value1);
    ++value1;
    printf("value1           : %d\n", value1);

    printf("전위 증가 연산자 : %d\n", ++value1);
    printf("후위 증가 연산자 : %d\n", value1++);
    printf("후위 증가 연산자 : %d\n", value1++);
    printf("후위 증가 연산자 : %d\n", value1++);
    printf("전위 증가 연산자 : %d\n", ++value1);
    printf("value1           : %d\n", value1);



    printf("==========================\n");
    printf("전위 감소 연산자 : %d\n", --value1);
    printf("후위 감소 연산자 : %d\n", value1--);
    printf("후위 감소 연산자 : %d\n", value1--);
    printf("후위 감소 연산자 : %d\n", value1--);
    printf("전위 감소 연산자 : %d\n", --value1);
    printf("value1           : %d\n", value1);



    return 0;
}
