#include <stdio.h>

int main() {

    char num1 = 28;
    int num2 = 1000000002;

    char num3 = num1 + num2;
    // char ���� ū ���� ������� ����
    printf("char ũ��(byte): %d\n", sizeof(char)); // 1
    printf("char ũ��(byte): %d\n", sizeof(num2)); // 4
    // num1(char) + num2(int) <- int type�� ũ���� char�� ��µǱ� ������ 2�� �����
    // 28 + 2 = 30 (���ڸ��� ������)
    printf("----------------------------------\n");



    printf("%d\n", num3); // 30


    int num4 = num1 + num2;
    printf("%d\n", num4); //1000000030
    return 0;
}
