#include <stdio.h>

int main() {
    int num1 = 0, result1;
    int num2 = 0, result2;

    result1 = num1++ + num1++ + num1++;
    printf("num1: %d, result1: %d\n", num1, result1);
    printf("----------------------------\n");


    result2 = ++num2;
    printf("num2: %d, result2: %d\n", num2, result2);

    result2 = ++num2 + ++num2;

    printf("num2: %d, result2: %d\n", num2, result2);

    result2 = ++num2 + ++num2 + ++num2;


    printf("num2: %d, result2: %d\n", num2, result2);

    return 0;
}
