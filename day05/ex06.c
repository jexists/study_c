#include <stdio.h>

int main() {
    char num1 = 113; //0111 0001
    char num2 = -15; //1111 0001
    char num3, num4, num5, num6;

    num3 = num1 << 2; //0111 0001 00
    num4 = num2 << 2; //1111 0001 00


    num5 = num1 << 4; //
    num6 = num2 << 4; //

    printf("num3: %d\n", num3); //-60
    printf("num4: %d\n", num4); //-60
    printf("num5: %d\n", num5); // 16
    printf("num6: %d\n", num6); // 16

    return 0;
}
