#include <stdio.h>
#include <stdlib.h> //malloc, free �Լ� ����� ��� ����

int main() {

    int num1 = 20;
    int *numP1;

    numP1 = &num1;

    int *numP2;

    //int type ũ��(4byte)���� �޸� ������ �Ҵ��ؼ� �� ������ �ּҰ��� numP2������ ������ ����
    //malloc �����޸� �Ҵ� ����
    numP2 = malloc(sizeof(int));

    printf("num1�� �ּ�: %u\n", numP1);
    printf("numP2�� �ּ�: %u\n", numP2);

    //�������� �Ҵ��� �޸� ����
    free(numP2);
    return 0;
}
