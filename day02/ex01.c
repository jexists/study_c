#include <stdio.h>

int main(void) {
    int radius;
    float pi;
    printf("정수 하나와 실수하나를 입력하세요. (두 수 사이 공백 필수)\n");

    scanf("%d %f", &radius, &pi);

    printf("radius: %d, pi: %.2f\n", radius, pi);
    return 0;
}
