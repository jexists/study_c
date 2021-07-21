
#include <stdio.h>
#include <stdbool.h>

int main() {
    bool b1;

    b1 = (false || false) && !false || false;
    // 우선순위 !> && > ||
    // b1 = (false || false) && true || false;
    // b1 = (false) && true || false;
    // b1 = fasle || false
    // b1 = false = 0

    printf("b1: %d\n", b1); //0

    printf("-------------------------\n");

    int num1;
    // 우선순위 (<) > (==)
    num1 = 5 == 5 < 10;
    // num1 = 5 == true
    // num1 = 5 == 1
    // num1 = false

    printf("num1: %d\n", num1); //0

    printf("-------------------------\n");

    int n1 = 1;
    int n2 = 2;
    int n3;

    //우선순위: 산술연산자 > 시프트연산자
    n3 = n1 << 2 + n2 << 1;
    // n3 = n1 << (2 + n2) << 1;
    //n3 = n1 << 4 << 1;
    //

    printf("n3: %d\n", n3); //32

    printf("-------------------------\n");

    int number1 = 1;
    int number2 = 2;
    int number3;

    number3 = (number1 << 2) + (number2 << 1);
    //1x2^2 + 2x2^1
    //4 + 4 = 8

    printf("number3: %d\n", number3); //8


    return 0;
}
