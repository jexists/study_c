
#include <stdio.h>

int main() {

    int *numberPointer;
    int number1 = 10;
    int number2 = 20;

    numberPointer = &number1;
    printf("number1: %d\n", *numberPointer);

    numberPointer = &number2;
    printf("number1: %d\n", *numberPointer);



    return 0;
}
