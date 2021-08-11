
/*

#include <stdio.h>
#include <stdlib.h

//viod: Ÿ�Կ� ���ظ� ���� �ʴ´�.
void allocMemory(void *pointer, int size) {

    pointer = malloc(size);
}


int main() {

    long long *numberPointer = NULL;

    allocMemory(numberPointer, sizeof(long long));

    *numberPointer = 10;

    printf("*numberPointer: %d\n", *numberPointer);

    free(numberPointer);

    return 0;
}
*/



#include <stdio.h>
#include <stdlib.h>

//viod: Ÿ�Կ� ���ظ� ���� �ʴ´�.
void allocMemory(void **pointer, int size) {

    *pointer = malloc(size);
}


int main() {

    long long *numberPointer;

    allocMemory((void**)&numberPointer, sizeof(long long));

    *numberPointer = 10;

    printf("*numberPointer: %lld\n", *numberPointer);

    free(numberPointer);

    return 0;
}
