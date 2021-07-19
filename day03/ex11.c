#include <stdio.h>
// if문 중괄호 {}생략 시 첫번째 줄만 입력된다.
int main() {
    float num1 = 0.1F;
    char c1 = 'a';

    if (num1 == 0.1F) {
        printf("num1은 %.1f입니다\n", num1);
    }

    if (c1 == 'a') {
        printf("c1은 %c입니다\n", c1);
    }

     if (c1 == 97) {
        printf("c1은 %c입니다\n", c1);
        printf("c1은 %d입니다\n", c1);
    }


    return 0;
}
