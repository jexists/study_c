
#include <stdio.h>

int main() {

    // switch 문에서는 정수 자료형만 사용할 수 있음
    //                 실수 자료형(float, double)은 사용 할 수 없음
    // char type도 정수형 자료형으로 인식함

    char c1;

    printf("알파벳을 입력하세요 ");
    scanf("%c", &c1);

    switch(c1) {
        case 'a':
            printf("a입니다.\n");
            break;
        case 'b':
            printf("b입니다.\n");
            break;
        case 'c':
            printf("c입니다.\n");
            break;

        default:
            printf("입력한 문자는 a, b, c 중에 없습니다. %c\n", c1);
    }

    printf("프로그램 종료");
    return 0;
}
