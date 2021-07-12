
#include <stdio.h>

int main() {

    // 총점과 평균 출력하기
    printf("총점과 평균 출력하기 \n");

    //변수 선언
    int kor, eng, math;
    int total;
    double average;

    //계산
    kor = 90;
    eng = 90;
    math = 91;

    total = kor + eng + math;
    average = (double)total / 3;
    average = total / 3.0;


    printf("국어: %3d\t영어: %3d\t수학: %3d\n", kor, eng, math);
    printf("===================================================\n");

    printf("총점: %3d\t평균: %3.2f\n", total, average);






    return 0;
}
