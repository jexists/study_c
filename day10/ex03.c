
#include <stdio.h>

int main() {


    int num1 = 10;
    char c1 = 'a';

    int *num1P = &num1;
    char *c1P = &c1;

    printf("--------------------\n");

    printf("*num1P : %d\n", *num1P);
    printf("*c1P : %c\n", *c1P);

    //void 포인터 선언하기

    void *vP;

    vP = num1P;
    printf("*vP: %u\n", vP);

    int *num2P = vP;
    printf("*num2P: %d\n", *num2P);
    vP = c1P;
    printf("*vP: %u\n", vP);

    char *c2P = vP;
    printf("*c2P: %c\n", *c2P);

    return 0;
}

