#include <stdio.h>

int main() {

    for (int i = 0; i < 10; i++) {
        printf("%d회차 반복\n",i+1);
        printf("%d\n",i+1);
    }

    printf("\n====================\n");

    //for (int i = 0; i < 11; i++) {
    for (int i = 1; i <= 10; i++) {
        printf("%d회차 반복\n",i);
        printf("%d\n",i);
    }

    printf("\n====================\n");
    //짝수
    for (int i = 1; i <= 10; i+=2) {
        printf("%d회차 ",i);
    }

    printf("\n====================\n");
    //홀수
    for (int i = 2; i <= 10; i+=2) {
        printf("%d회차 ",i);
    }

    printf("\n====================\n");
    //홀수
    for (int i = 1; i <= 10; i+=1 ) {
        if (i% 2!=0) {
            printf("%d회차 ",i);
        }
    }
    printf("\n====================\n");

    for (int i = 1; i <= 10; i+=1 ) {
        if (i% 2==0) {
            printf("%d회차 ",i);
        }
    }

    return 0;
}

