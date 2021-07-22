#include <stdio.h>

int main() {
    int number;

    printf("정수를 입력하세요 ");
    scanf("%d", &number);

    switch(number) {
        case 1: {
            //case 문 안에서 변수를 선언하는 경우에는 중괄호로 묶어주어야함
            int num = number;
            printf("%d를 입력하셨습니다. \n", number);
            break;
            }
        case 2:
            printf("2을 입력하셨습니다. \n");
            break;
        case 3:
            printf("3을 입력하셨습니다. \n");
            break;

        default:
            printf("1, 2, 3 중입력해주세요 \n");
    }

    printf("프로그램 종료");
    return 0;
}

