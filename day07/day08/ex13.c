

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
    printf("1���� %d���� ���ϸ� �հ谡 100�� �ѽ��ϴ�.\n", i);
    printf("�հ�: %d\n", sum);
    printf("���α׷� ����\n");
    return 0;
}
