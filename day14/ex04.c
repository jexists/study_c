
#include <stdio.h>
#include <stdlib.h>

int main() {


    char *s1 = "654";
    int number1;

    number1 = atoi(s1);
    //atoi: ACSII string to int
    //stdlib.h에 정의되어 있음
    //문자열을 성공적으로 숫자로 바꾼 경우 해당 숫자를 반환
    //바꾸지 못한 경우 => 0을 반환
    //astoi(문자열 주소값: char type의 포인터)


    number1 =  atoi(s1);

    printf("number1: %d\n", number1);


    printf("-----------------\n");

    //16진수로 된 문자열을 정수로 바꾸기
    char *s2 = "0xaf10";
    int number2;

    //strtol :  strting to long
    //stdlib.h에 정의되어 있음
    //문자열을 성공적으로 숫자로 바꾼 경우 해당 숫자를 반환
    //바꾸지 못한 경우 => 0을 반환
    //16 : 16진법으로 표기된 문자열을 정수로 변환
    number2 = strtol(s2, NULL, 16);

    printf("number2: 16진수 : %x, 10진수: %d\n", number2, number2);



    printf("-----------------\n");

    char *s3 = "0xad10 42 0x27c 9952";


    char *end; // 이전 숫자의 끝 부분을 저장하기 위한 포인터

    int num1 = strtol(s3, &end, 16);
    int num2 = strtol(end, &end, 10);
    int num3 = strtol(end, &end, 16);
    int num4 = strtol(end, NULL, 10);


    printf("num1: %x\n", num1);
    printf("num2: %d\n", num2);
    printf("num3: %x\n", num3);
    printf("num4: %d\n", num4);


    printf("-----------------\n");

    //atof: ASCII string to float
    //성공: 실수를 반환, 실패: 0을 반환

    char *s4 = "23.568984";
    float fNumber;

    fNumber = atof(s4);

    printf("fNumber: %f\n", fNumber);


    printf("-----------------\n");

    char *s5 = "3.e5";
    float fNumber2;

    fNumber2 = atof(s5);
    printf("지수수표현: %e, 실수표현: %f\n", fNumber2, fNumber2);

    return 0;
}
