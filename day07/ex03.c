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

    printf("------------ Â¦¼ö -----------\n\n");

    for(int i = 2; i <= 9; i++) {

        if (i % 2 == 0) {
            for(int j = 1; j <= 9; j++) {
                printf("%d X %d = %d\n",  i, j, i * j);
            }
        printf("-----------------------\n\n");
        }
    }

     printf("------------ Â¦¼ö(ºñÈ¿À²) -----------\n\n");

    for(int i = 2; i <= 9; i++) {

        for(int j = 1; j <= 9; j++) {
            if (i % 2 == 0) {
                printf("%d X %d = %d\n",  i, j, i * j);
            }
        }
        printf("-----------------------\n\n");
    }

     printf("------------ Â¦¼ö´Ü °öÇÏ±â Â¦¼ö -----------\n\n");

    for(int i = 2; i <= 9; i++) {

        for(int j = 1; j <= 9; j++) {
            if (i % 2 == 0 && j % 2 ==0) {
                printf("%d X %d = %d\n",  i, j, i * j);
            }
        }

     printf("\n");

    }

     printf("------------ È¦¼ö´Ü °öÇÏ±â È¦¼ö -----------\n\n");

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

     printf("-- Â¦¼ö´Ü °öÇÏ±â Â¦¼ö && È¦¼ö´Ü °öÇÏ±â È¦¼ö --\n\n");

    for(int i = 2; i <= 9; i++) {

        for(int j = 1; j <= 9; j++) {
            if (i % 2 == 0 && j % 2 ==0 || i % 2 && j % 2) {
                printf("%d X %d = %d\n",  i, j, i * j);
            }
        }

     printf("\n");

    }

    printf("-- ÆÄÀÌ³Î Âª°Ô --\n\n");

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

