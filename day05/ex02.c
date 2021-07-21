
#include <stdio.h>

int main() {
    int num1 = 4; //0 1 0 0
    int num2 = 4; //0 1 0 0
    int num3 = 4; //0 1 0 0
    int num4 = 4; //0 1 0 0
    int num5 = 4; //0 1 0 0
    int num6 = 5; //00000000 00000000 00000000 00000101


    num1 &= 5;  //0 1 0 1
    num2 |= 2;  //0 0 1 0
    num3 ^= 3;  //0 0 1 1
    num4 <<= 2; //0 1 0 0 0 0
    num5 >>= 2; //0 1
    num6 = ~num6; //11111111 11111111 11111111 11111010


    printf("== 할당 연산 후 == \n");

    printf("num1: %d\n", num1); // 4
    printf("num2: %d\n", num2); // 6
    printf("num3: %d\n", num3); // 7
    printf("num4: %d\n", num4); // 16
    printf("num5: %d\n", num5); // 1
    printf("num6: %d\n", num6); // -6 (int 32bit)

    return 0;
}
