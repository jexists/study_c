
#include <stdio.h>

int main() {

    // type = data type
    // �� �ڷ� ��

    printf("���� \n");
    int num1;
    int num2;
    num1 = 10;
    num2 = 8;

    printf("num1 : %d\tnum2::%d\n", num1, num2);
    printf("int type�� ũ��(byte ��): %d\n", sizeof(int)); //4byte
    printf("���� 3�� ũ��(byte ��): %d\n", sizeof(3)); //4byte
    printf("long long type�� ũ��(byte ��): %d\n", sizeof(long long)); //8byte
    printf("double type�� ũ��(byte ��): %d\n", sizeof(double)); //8byte



    return 0;
}
