#include <stdio.h>

int main() {


    for(int i = 2; i <= 9; i++) {

        if (i % 2 != 0) {
            for(int j = 1; j <= 9; j++) {
                printf("%d X %d = %d\n",  i, j, i * j);
            }
        printf("-----------------------\n\n");
        }
    }

    printf("------------ ¦�� -----------\n\n");

    for(int i = 2; i <= 9; i++) {

        if (i % 2 == 0) {
            for(int j = 1; j <= 9; j++) {
                printf("%d X %d = %d\n",  i, j, i * j);
            }
        printf("-----------------------\n\n");
        }
    }

     printf("------------ ¦��(��ȿ��) -----------\n\n");

    for(int i = 2; i <= 9; i++) {

        for(int j = 1; j <= 9; j++) {
            if (i % 2 == 0) {
                printf("%d X %d = %d\n",  i, j, i * j);
            }
        }
        printf("-----------------------\n\n");
    }

     printf("------------ ¦���� ���ϱ� ¦�� -----------\n\n");

    for(int i = 2; i <= 9; i++) {

        for(int j = 1; j <= 9; j++) {
            if (i % 2 == 0 && j % 2 ==0) {
                printf("%d X %d = %d\n",  i, j, i * j);
            }
        }

     printf("\n");

    }

     printf("------------ Ȧ���� ���ϱ� Ȧ�� -----------\n\n");

    for(int i = 2; i <= 9; i++) {

        if (i % 2) {
            for(int j = 1; j <= 9; j++) {
                if (j % 2) {
                    printf("%d X %d = %d\n",  i, j, i * j);
                }
            }
        }

     printf("\n");

    }

     printf("-- ¦���� ���ϱ� ¦�� && Ȧ���� ���ϱ� Ȧ�� --\n\n");

    for(int i = 2; i <= 9; i++) {

        for(int j = 1; j <= 9; j++) {
            if (i % 2 == 0 && j % 2 ==0 || i % 2 && j % 2) {
                printf("%d X %d = %d\n",  i, j, i * j);
            }
        }

     printf("\n");

    }

    printf("-- ���̳� ª�� --\n\n");

    for(int i = 2; i <= 9; i++) {

        for(int j = 1; j <= 9; j++) {
            if (i % 2 == j % 2) {
                printf("%d X %d = %d\n",  i, j, i * j);
            }
        }

     printf("\n");

    }


    return 0;
}

