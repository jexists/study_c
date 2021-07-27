#include <stdio.h>
int main() {

    int sum = 0;
    int total = 0;

    for(int i = 1; i <= 10; i++) {
        sum += i;
        total += sum;
    }

    printf("=============\n");
    printf("합계: %d\n", total);
    printf("프로그램 종료\n");
    return 0;
}
