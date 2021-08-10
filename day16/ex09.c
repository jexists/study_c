

#include <stdio.h>
#include <stdlib.h>

int *addressMemory() {

    //int number = 123;

    int *intPointer = malloc(sizeof(int));

    *intPointer = 123;

    //*intPointer = &number;

    return intPointer;
}

int main() {

    int *resultPointer;

    resultPointer = addressMemory();

    printf("resultPointer: %p\n", resultPointer); //NOTWORKING
    printf("*resultPointer: %d\n", *resultPointer); //NOTWORKING


    free(resultPointer);
    return 0;
}
