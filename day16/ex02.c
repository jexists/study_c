

#include <stdio.h>
#include <stdlib.h>


struct Data {
    char c1[20];
    int *numberPointer;
};

int main() {
    int num1 = 10;

    //구조체 타입의 변수
    struct Data d;
    //구조체 타입의 포인터
    struct Data *dPointer = malloc(sizeof(struct Data));

    d.numberPointer = &num1; //변수
    dPointer -> numberPointer = &num1; //포인터

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
