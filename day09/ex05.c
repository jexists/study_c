
#include <stdio.h>

int main() {

    int num1 = 1;
    int num2 = 1;
    int num3 = 0;

    printf("%d, %d", num1, num2);

    for (int i = 0; i < 10; i++) {
        num3 = num1 + num2;
        printf(", %d", num3);
        num1 = num2;
        num2 = num3;
    }


    return 0;
}

