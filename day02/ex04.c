#include <stdio.h>

// global variable = 전역변수
// double PI = 3.1415927;

//const 상수: 프로그램 실행 중에 값이 변하지 않음
const double PI = 3.1415927;


int main() {
    int radius;
    double area, circumference;


    radius = 6;
    area = radius * radius * PI;
    circumference = 2 * radius * PI;


    printf("원넓이: %.2f\n",area);
    printf("원둘레: %.2f\n",circumference);

    return 0;
}
