#include <stdio.h>
#include <stdlib.h> //malloc, free 함수 선언된 헤더 파일

int main() {

    int num1 = 20;
    int *numP1;

    numP1 = &num1;

    int *numP2;

    //int type 크기(4byte)만한 메모리 공간을 할당해서 그 공간의 주소값을 numP2포인터 변수에 저장
    //malloc 동적메모리 할당 연산
    numP2 = malloc(sizeof(int));

    printf("num1의 주소: %u\n", numP1);
    printf("numP2의 주소: %u\n", numP2);

    //동적으로 할당한 메모리 해제
    free(numP2);
    return 0;
}
