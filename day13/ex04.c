

#include <stdio.h>

int main(){

    // char type의 배열(일차원)로 문자열 선언하기

    char str1[10] = "jexist";

    char *str2 = "exchanged";

    printf("str1: %s\n", str1); //배열
    printf("str2: %s\n", str2); //포인터

    printf("--------------------------------------\n");


    int number;
    number = 111; // 실제 값이 저장

    int *nums;
    nums = &number; //포인터: number 변수의 주소값 저장


    char str3[10]; //크기가 10인 char type의 배열 선언
    //str3 변수에는 배열의 주소값이 저장됨
    //배열과 포인터는 성질이 비슷 (except 사이즈)

    printf("문자열을 입력하세요 :");
    scanf("%s", str3); //배열에는 주소표시 연산자 필요없음 (배열자체가 주소기때문에)

    printf("str3 : %s\n", str3);

    printf("--------------------------------------\n");

    int figure;

    printf("정수를 입력하세요 :");
    scanf("%d", &figure); //주소표시 연산자 필요(&)

    printf("figure : %d\n", figure);

    printf("--------------------------------------\n");


    return 0;
}
