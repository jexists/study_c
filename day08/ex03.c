

#include <stdio.h>

int main() {

    int num1;

    printf("숫자를 적어주세요\n");

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
        printf("1입니다\n");
        goto EXIT;
    TWO:
        printf("2입니다\n");
        goto EXIT;
    THREE:
        printf("3입니다\n");
        goto EXIT;
    EXIT:
        printf("프로그램 종료\n");


    return 0;
}
