#include <stdio.h>

int main() {
    int num1 = 7;
    int num2 = 2;
    // num1 = num1 % 2; = num1 %= 2; (���: �Ҵ翬���ڰ� ���� ��츸 ��밡��)
    // num1 %= 2; // �����Ҵ翬����
    num1 %= num2;
    printf("%d\n", num1);

    printf("----------------------------------\n");

    printf("%d\n", 5 % 3); //2
    printf("%d\n", 5 % -3); //2
    printf("%d\n", -5 % 3); //-2
    printf("%d\n", -5 % -3); //-2


    /*
    int a;
    int b;

    a == (a/b) * b + a % b
    5 == (5/3) * 3 + 5 % 3
    5 == (5/-3) * -3 + 5 % -3
    -5 == (-5/3) * 3 + -5 % 3
    -5 == (-5/-3) * -3 + -5 % -3
    */
    return 0;
}
