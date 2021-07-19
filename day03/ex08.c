#include <stdio.h>

int main() {

    char num1 = 28;
    int num2 = 1000000002;

    char num3 = num1 + num2;
    // char 보다 큰 값이 저장되지 않음
    printf("char 크기(byte): %d\n", sizeof(char)); // 1
    printf("char 크기(byte): %d\n", sizeof(num2)); // 4
    // num1(char) + num2(int) <- int type이 크지만 char로 출력되기 때문에 2만 저장됨
    // 28 + 2 = 30 (앞자리는 버려짐)
    printf("----------------------------------\n");



    printf("%d\n", num3); // 30


    int num4 = num1 + num2;
    printf("%d\n", num4); //1000000030
    return 0;
}
