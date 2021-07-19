#include <stdio.h>

int main() {
    int num1 = 15;
    int num2 = 27;
    int num3 = 3;

    num1 %= num3;
    num2 %= num3;


    printf("%d\n", num1); //0
    printf("%d\n", num2); //0

    printf("----------------------------------\n");


    return 0;
}
