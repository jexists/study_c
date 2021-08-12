

#include <stdio.h>


void greeting1() {
    printf("Hello, World !!!\n");
}

void greeting2() {
    printf("Hello, Programming !!\n");
}

int add(int n1, int n2) {
    return n1 + n2;

}


int main() {

    int(*pointerAdd)(int n1, int n2);

    pointerAdd = add;

    printf("add 林家 窃荐:(&add) %p \n", &add);
    printf("add 林家 窃荐:(add) %p \n", add);

    printf("pointerAdd: %p \n", pointerAdd);
    printf("pointerAdd 林家 窃荐: %p \n", &pointerAdd);
    printf("pointerAdd 林家 窃荐: %p \n", **pointerAdd);

    int result1 = add(5, 3);
    printf("result1: %d \n", result1);

    int result2 = pointerAdd(5, 3);
    printf("result2: %d \n", result2);

    printf("------------\n");



    void(*greetingPointer)();

    greetingPointer = greeting1;

    greetingPointer();

    printf("------------\n");


    greetingPointer = greeting2;

    greetingPointer();

    printf("------------\n");


    return 0;
}
