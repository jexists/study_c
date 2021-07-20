
#include <stdio.h>
#include <stdbool.h>

int main() {

    bool b1 = true;
    bool b2 = false;

    printf(b1 ? "true": "false");
    printf("\n");
    printf(b2 ? "true": "false");
    printf("\n");

    printf("%s\n", b1 ? "true": "false");
    printf("%s\n", b2 ? "true": "false");

    bool b3 = true;

    if(b3 == true) {
        printf("참입니다.\n");
    }else {
        printf("참입니다.\n");
    }

    printf("bool type의 크기(byte): %d\n", sizeof(bool)); //1
    printf("int type의 크기(byte): %d\n", sizeof(int)); //4

    printf("===========================\n");

    bool b4 = true;
    bool b5 = false;

    printf("%d\n", b4&&b4); //1
    printf("%d\n", b4&&b5); //0
    printf("%d\n", b5&&b4); //0
    printf("%d\n", b5&&b5); //0
    printf("===========================\n");
    printf("%d\n", b4||b4); //1
    printf("%d\n", b4||b5); //1
    printf("%d\n", b5||b4); //1
    printf("%d\n", b5||b5); //0


    return 0;
}
