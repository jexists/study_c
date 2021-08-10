


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *helloFunc() {

    char *c1 = "Hello, CLang"; //Heap memory 저장?

    return c1; //문자열 포인터 반환

}

char *helloHeap() {
    char *c1 = malloc(sizeof(char) * 20);
    strcpy(c1, "Hello, World!!!");

    return c1; //문자열 포인터 반환
}
int main() {

    char *charPointer1;
    char *charPointer2;

    charPointer1 = helloFunc();
    charPointer2 = helloHeap();


    printf("charPointer1: %s\n", charPointer1);


    printf("charPointer2: %s\n", charPointer2);


    free(charPointer2);
    return 0;
}
