#include <stdio.h>

int main() {
    int num1;

    scanf("%d", &num1);

    if (num1 == 11) {
        printf("num1�� %d�Դϴ�\n", num1);
    }
    if (num1 == 22) {
        printf("num1�� %d�Դϴ�\n", num1);
    }
    if (num1 != 11 && num1 != 22) {
        printf("num1�� 11�� �ƴϰ� 22�� �ƴϰ� %d�Դϴ�\n", num1);
    }

    return 0;
}
