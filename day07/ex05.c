
#include <stdio.h>

int main() {

    for(int i = 2; i <= 9; i++) {
       for(int j = 1; j <= 9; j++) {
            printf("%2d",i*j);
        }
        printf("\n");
    }


    for(int i = 1; i <= 5; i++) { //줄(행)
       for(int j = 1; j <= 5; j++) { //몇개씩(열)
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");


    for(int i = 1; i <= 5; i++) {
       for(int j = 1; j <= 3; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");


    for(int i = 1; i <= 5; i++) {
       for(int j = 1; j <= 5 - i; j++) {
            printf(" ");
        }
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");



    for(int i = 1; i <= 5; i++) {
       for(int j = 1; j <= 5; j++) {
            if (i == j) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n\n");


    for(int i = 1; i <= 5; i++) {
       for(int j = 1; j <= 5-i; j++) {
            printf(" ");
        }
        for(int j = 1; j <= 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");


    for(int i = 5; i >= 0; i--) {
       for(int j = 0; j <= i; j++) {
           printf("*");
        }
        printf("\n");
    }
    printf("\n\n");

    for(int i = 1; i <= 5; i++) {
       for(int j = 1; j <= 6-i; j++) {
           printf("*");
        }
        printf("\n");
    }
    printf("\n\n");


    for(int i = 1; i < 5; i++) {
       for(int j = 0; j < 5-i; j++) {
           printf("*");
        }
        printf("\n");
    }
    printf("\n\n");


    for(int i = 0; i < 5; i++) {
       for(int j = 0; j < i; j++) {
            printf(" ");
        }
       for(int j = 0; j < 5-i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");

    return 0;

}
