
#include <stdio.h>

int main() {
    // �ܺ� for���� �ݺ��� ���� ����
    // index ����x
    int number = 3;

    printf("���� ������ �Է��ϼ��� :");
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
