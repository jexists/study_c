
#include <stdio.h>

int main() {

    int count = 0;

    for(int x= 0; x <= 10; x++) {
        for (int y = 0; y <= 10; y++) {
            if (2 * x + 4* y == 10) {
                printf("x : %d, y: %d\n", x, y);
                count++;
            }
        }
    }
    printf("-----------------------------\n");

    printf("��� %d���� �Դϴ�.\n", count);
    return 0;
}
