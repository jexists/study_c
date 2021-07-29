
#include <stdio.h>
#include <stdlib.h> //malloc, free
#include <string.h> //memset (memory set)

int main() {

    long long *numP = malloc(sizeof(long long)); //8byte

    //numP 주소지에 8바이트 크기만큼 공간을 확보해서 0x27값 저장
    memset(numP, 0x27, 8); //16진수 27을 8개 넣음

    printf("0x%20x\n", *numP); //16진수 받기

    free(numP); //메모리 반납
    return 0;
}
