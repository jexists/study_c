#include <stdio.h>
int main() {

    int sum = 0;
    int total = 0;

    for(int i = 1; i <= 10; i++) {
        sum += i;
        total += sum;
    }

    printf("=============\n");
    printf("�հ�: %d\n", total);
    printf("���α׷� ����\n");
    return 0;
}
