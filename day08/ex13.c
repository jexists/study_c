

#include <stdio.h>
#include <stdbool.h>

int main() {

    int sum = 0;
    int i = 1;
    int sign = 1;
    int number = 0;

    while(true) {

        number = sign * i;
        sum += number;

        if (sum > 100) {
            break;
        }
        i++;
        //sign = -sign;
        sign = -1 * sign;
    }
    printf("=============\n");
    printf("1부터 %d까지 더하면 합계가 100을 넘습니다.\n", i);
    printf("합계: %d\n", sum);
    printf("프로그램 종료\n");
    return 0;
}
