
#include <stdio.h>

int main() {
    unsigned char flag = 0;

    flag |= 1; //flag = flag | 1; 000000001
    printf("flag: %u\n", flag); ��

    flag |= 2; //flag = flag | 2; 00000010
    printf("flag: %d\n", flag); // 3 = 00000011

    flag |= 4; //flag = flag | 4; 00000100
    printf("flag: %d\n", flag); // 7 = 0000111

    printf("-------------------------\n");


    //flag(7) 0000 0001

    if(flag & 1) {
        printf("00000001�� ��������\n");
    } else {
        printf("00000001�� Ŀ������\n");
    }

    //flag(7) 0000 0001
    if(flag & 2) {
        printf("00000010 ��������\n");
    } else {
        printf("00000010 Ŀ������\n");
    }

    //flag(7) 0000 0001
    if(flag & 4) {
        printf("00000100 ��������\n");
    } else {
        printf("00000100 Ŀ������\n");
    }

    return 0;
}
