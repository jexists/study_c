

#include <stdio.h>

int main() {

    int num1 = 5;
    //       0 1 0 1

    printf("<<: %d\n", num1 << 1); //10
    //     0 1 0 1 0 (�������� �Ѱ��� �ű�)

    printf("<<: %d\n", num1 << 2); //20
    //   0 1 0 1 0 0 (�������� �Ѱ��� �ű�)

    printf("<<: %d\n", num1 << 3); //40
    // 0 1 0 1 0 0 0 (�������� �Ѱ��� �ű�)


    return 0;
}
