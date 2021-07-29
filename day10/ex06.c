
#include <stdio.h>

int main() {

    int *numberP1;
    int **numberP2;
    int number;

    printf("정수를 입력하세요 :");
    scanf("%d", &number);


    numberP1 = &number;
    numberP2 = &numberP1;

    printf("%d\n", **numberP2);
    return 0;
}
