#include <stdio.h>

int main() {
    /*
    234 입력 = 200
    456 입력 = 400
    578 입력 = 500
    출력하는 프로그램 작성

    [힌트] int type의 / 연산자와 % 연산자 사용
    */

    int number;

    printf("백의 자리 정수를 입력하세요 : ");
    scanf("%d", &number);

    /* 1번째
    number = number / 100;
    number = number * 100;
    */

    /* 2번째
    number /= 100;
    number *= 100;
    */


    number = (number / 100) * 100


    printf("number: %d \n : ", number);

    printf("----------------------------------\n");
    return 0;
}
