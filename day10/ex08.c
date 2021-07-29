
#include <stdio.h>
#include <stdlib.h>
int main() {

    int *numP;

    numP = malloc(sizeof(int)); //

    *numP = 333; //주소에 있는 공간에 실제값 저장 가능

    printf("*numP: %d\n", *numP);

    free(numP); //메모리 반납
    return 0;
}
