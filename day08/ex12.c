
#include <stdio.h>
#include <stdbool.h>

int main() {

    int sum = 0;
    int i = 1;

    while(true) {

        sum += i;

        if (sum > 100) {
            break;
        }
        i++;
    }
    printf("=============\n");
    printf("1���� %d���� ���ϸ� �հ谡 100�� �ѽ��ϴ�.\n", i);
    printf("�հ�: %d\n", sum);
    printf("���α׷� ����\n");
    return 0;
}
