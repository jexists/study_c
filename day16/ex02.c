

#include <stdio.h>
#include <stdlib.h>


struct Data {
    char c1[20];
    int *numberPointer;
};

int main() {
    int num1 = 10;

    //����ü Ÿ���� ����
    struct Data d;
    //����ü Ÿ���� ������
    struct Data *dPointer = malloc(sizeof(struct Data));

    d.numberPointer = &num1; //����
    dPointer -> numberPointer = &num1; //������

    printf("*d.numberPointer: %d\n", *d.numberPointer);

    printf("*dPointer-> numberPointer: %d\n", *dPointer-> numberPointer);

    printf("*d.numberPointer: %p\n", *d.numberPointer);
    printf("*dPointer-> numberPointer: %p\n", dPointer-> numberPointer);

    dPointer -> c1 = 'a';

    printf("(*dPointer).c1: %c\n", (*dPointer).c1);
    printf("(*dPointer).numberPointer: %d\n", (*dPointer).numberPointer);
    printf("*(*dPointer).numberPointer: %p\n", *(*dPointer).numberPointer);

    free(dPointer);
    return 0;
}
