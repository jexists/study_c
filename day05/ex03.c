#include <stdio.h>

int main() {

    unsigned char num1 = 240;
    unsigned char num2 = 15;

    unsigned char num3, num4;

    //num1의 bit를 왼쪽으로 2번 이동
    num3 = num1 << 2;  //

    //num2의 bit를 오른쪽으로 2번 이동
    num4 = num2 >> 2; //

    //printf("== 할당 연산 후 == \n");
    printf("num3: %d\n", num3); // 192
    printf("num4: %d\n", num4); // 3

    return 0;
}
