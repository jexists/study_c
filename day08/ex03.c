

#include <stdio.h>

int main() {

    int num1;

    printf("���ڸ� �����ּ���\n");

    scanf("%d", &num1);

    if (num1 == 1) {
        goto ONE;
    } else if (num1 == 2) {
        goto TWO;
    } else if (num1 == 3) {
        goto THREE;
    } else {
        goto EXIT;
    }

    ONE:
        printf("1�Դϴ�\n");
        goto EXIT;
    TWO:
        printf("2�Դϴ�\n");
        goto EXIT;
    THREE:
        printf("3�Դϴ�\n");
        goto EXIT;
    EXIT:
        printf("���α׷� ����\n");


    return 0;
}