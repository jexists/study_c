
#include <stdio.h>

int main() {
    // 외부 for문의 반복에 사용될 변수
    // index 변수x
    int number = 3;

    printf("행의 개수를 입력하세요 :");
    scanf("%d", &number);

    for (int i = 0; i < number; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int j = 2 * number - 1; j > 2 * i; j--) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");
    return 0;
}
