#include <stdio.h>
#include <stdlib.h>

int main() {
    //실수를 문자열로 변환

    //반환할 문자를 저장하는 배열

    char s1[10];
    float num1 = 38.972340F;

    //%f를 지정해서 실수를 문자열로 저장

    sprintf(s1, "%f", num1);

    printf("s1: %s\n", s1);


    printf("----------------------\n");

    sprintf(s1, "%e", num1);

    printf("s1: %s\n", s1);


    printf("----------------------\n");

    //문자열을 10진 정수로 변환
    char *s2 = "20972";
    int num2;

    num2 = atoi(s2);

    printf("num2: %d\n", num2);



    printf("----------------------\n");

    char *s3 = "0x1faceface";

    int num3;
    //16진수로 표기된 문자열을 정수로 변환하는 경우,
    //strtol()함수 사용
    //NULL:현재 문자열 안에 들어있는 숫자가 하나이므로
        //두번째argument (끝포인터)로는 Null로 지정

    //16 진번 표시

    strtol(s3, NULL, 16);
    printf("num3: x0%x\n", num3);




    printf("----------------------\n");
    //문자열 => 실수
    //atof(16진수 모양의 문자열을 가리키고 있는 포인터) 함수 사용

    char *s4 = "97.527824";
    float num4;

    num4 = atof(s4);
    printf("num4: %f\n", num4);

    double num5 = atof("78.5654");

    printf("num5: %f\n", num5);

    printf("----------------------\n");

    //두개의 실수로 된 문자열을 실수로 변환

    char *s5 = "29.977213 4528.112305";
    float number1;
    float number2;
    char *end;

    //strtof()함수 사용
    //strtof(s5,&end): 첫번째 실수를 변환하고 끝 포인터를 구함
    //strtof(end, NULL) 앞에서 구한 포인터를 사용해서 두번째 실수를 변환

    number1 = strtof(s5, &end);
    number2 = strtof(end, NULL);

    printf("number1: %f\n", number1);
    printf("number2: %f\n", number2);

    printf("----------------------\n");

    //char 배열에 실수모양의 문자열과
    //정수 모양의 문자열을 함께 저장한 후
    // 배열속에 저장된 문자열 출력

    //실수 모양의 문자열과
    //정수모양(16진수)의 문자열을 함께 저장하는 배열 선언

    char s6[30];
    float fNumber = 98.415237F;
    int iNumber = 0x3fe1920;

    sprintf(s6, "%f, 0x%x", fNumber, iNumber);

    printf("s6: %s\n", s6);

    return 0;
}
