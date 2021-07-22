
#include <stdio.h>

int main() {

    //1부터 10까지의 합 출력

    int sum = 0;

    sum = sum + 1; //0
    sum = sum + 1;
    sum = sum + 1;
    sum = sum + 1;
    sum = sum + 1;
    sum = sum + 1;
    sum = sum + 1;
    sum = sum + 1;
    sum = sum + 1;
    sum = sum + 1;

    printf("sum: %d\n", sum); // 10

    printf("\n====================\n");

    sum = 0;

    sum = sum + 1; //0
    sum = sum + 2; //2
    sum = sum + 3;
    sum = sum + 4;
    sum = sum + 5;
    sum = sum + 6;
    sum = sum + 7;
    sum = sum + 8;
    sum = sum + 9;
    sum = sum + 10;

    printf("sum: %d\n", sum); // 55



    printf("====================\n");

    for (int i = 1; i <= 10; i++ ) {
       sum = sum + i;
    }
    printf("sum: %d\n", sum); // 110


    return 0;
}
