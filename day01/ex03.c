
#include <stdio.h>

int main() {

    // type = data type
    // 형 자료 형

    printf("변수 \n");
    int num1;
    int num2;
    num1 = 10;
    num2 = 8;

    printf("num1 : %d\tnum2::%d\n", num1, num2);
    printf("int type의 크기(byte 수): %d\n", sizeof(int)); //4byte
    printf("정수 3의 크기(byte 수): %d\n", sizeof(3)); //4byte
    printf("long long type의 크기(byte 수): %d\n", sizeof(long long)); //8byte
    printf("double type의 크기(byte 수): %d\n", sizeof(double)); //8byte



    return 0;
}
