#include <stdio.h>

int main() {

    for (int i = 0; i < 10; i++) {
        printf("%dȸ�� �ݺ�\n",i+1);
        printf("%d\n",i+1);
    }

    printf("\n====================\n");

    //for (int i = 0; i < 11; i++) {
    for (int i = 1; i <= 10; i++) {
        printf("%dȸ�� �ݺ�\n",i);
        printf("%d\n",i);
    }

    printf("\n====================\n");
    //¦��
    for (int i = 1; i <= 10; i+=2) {
        printf("%dȸ�� ",i);
    }

    printf("\n====================\n");
    //Ȧ��
    for (int i = 2; i <= 10; i+=2) {
        printf("%dȸ�� ",i);
    }

    printf("\n====================\n");
    //Ȧ��
    for (int i = 1; i <= 10; i+=1 ) {
        if (i% 2!=0) {
            printf("%dȸ�� ",i);
        }
    }
    printf("\n====================\n");

    for (int i = 1; i <= 10; i+=1 ) {
        if (i% 2==0) {
            printf("%dȸ�� ",i);
        }
    }

    return 0;
}

