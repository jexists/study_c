
#include <stdio.h>

int main() {
    unsigned char flag = 7; //0000 0001

    //flag = flage & ~2;
    flag &= ~2;


    printf("flag: %u\n", flag); //5


    //flag(5) 0000 0001

    if(flag & 1) {
        printf("00000001�� ��������\n");
    } else {
        printf("00000001�� Ŀ������\n");
    }

    //flag(5) 0000 0001
    if(flag & 2) {
        printf("00000010 ��������\n");
    } else {
        printf("00000010 Ŀ������\n");
    }

    //flag(5) 0000 0001
    if(flag & 4) {
        printf("00000100 ��������\n");
    } else {
        printf("00000100 Ŀ������\n");
    }

    return 0;
}
