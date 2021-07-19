#include <stdio.h>

int main() {
    int num1 = 7;
    int num2 = 2;
    // num1 = num1 % 2; = num1 %= 2; (축약: 할당연산자가 같을 경우만 사용가능)
    // num1 %= 2; // 복합할당연산자
    num1 %= num2;
    printf("%d\n", num1);

    printf("----------------------------------\n");

    printf("%d\n", 5 % 3); //2
    printf("%d\n", 5 % -3); //2
    printf("%d\n", -5 % 3); //-2
    printf("%d\n", -5 % -3); //-2


    /*
    int a;
    int b;

    a == (a/b) * b + a % b
    5 == (5/3) * 3 + 5 % 3
    5 == (5/-3) * -3 + 5 % -3
    -5 == (-5/3) * 3 + -5 % 3
    -5 == (-5/-3) * -3 + -5 % -3
    */
    return 0;
}
