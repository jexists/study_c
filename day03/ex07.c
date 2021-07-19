#include <stdio.h>

int main() {

    //정수의 기본값: int
    //실수의 기본값: double
    int num1 = 11;
    float num2 = 3.14F;

    printf("%f\n", num1 + num2);
    printf("%f\n", num1 - num2);
    printf("%f\n", num1 * num2);
    printf("%f\n", num1 / num2);

    printf("----------------------------------\n");

    long long num3 = 123456789000;
    int num4 = 10;

    printf("%lld\n", num3 + num4);
    printf("%lld\n", num3 - num4);
    printf("%lld\n", num3 * num4);
    printf("%lld\n", num3 / num4);


    return 0;
}
