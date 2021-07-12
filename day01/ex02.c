
#include <stdio.h>

int main() {

    printf("변수 \n");

    // 정수형 변수 선언
    int num1, num2;

    // 변수의 초기화: 처음으로 값을 할당하는 것
    num1 = 10;
    num2 = 8;

    //format specifier : 형식 지정자
    //%d: decimal (정수)
    //%f: floating point (소수점 있는 숫자: 실수/부동소수점)
    //double:
    // 순서대로 값을 받는다.
    printf("%d + %d = %d\n", num1, num2, num1+num2);
    printf("%d - %d = %d\n", num1, num2, num1-num2);
    printf("%d x %d = %d\n", num1, num2, num1*num2);
    printf("%d / %d = %d\n", num1, num2, num1/num2);
    printf("%d / %d = %f\n", num1, num2, num1/(double)num2);
    printf("%d / %.2f = %f\n", num1, (double)num2, num1/(double)num2);
    printf("%d %% %d = %d\n", num1, num2, num1%num2);

    return 0;
}
