

#include <stdio.h>

int main() {

    // 0: false, 1: true


    if (1) {
        printf("���Դϴ�.\n");
    } else {
        printf("�����Դϴ�.\n");
    }



    printf("===========================\n");
    printf("%d\n", 1&&1); //1
    printf("%d\n", 1&&0); //0
    printf("%d\n", 0&&1); //0
    printf("%d\n", 0&&0); //0


    printf("===========================\n");
    printf("%d\n", 1||1); //1
    printf("%d\n", 1||0); //1
    printf("%d\n", 0||1); //1
    printf("%d\n", 0||0); //0


    printf("===========================\n");
    printf("%d\n", !1); //0
    printf("%d\n", !0); //1
    printf("%d\n", !777); //0
    printf("%d\n", !-55); //0


    return 0;
}


