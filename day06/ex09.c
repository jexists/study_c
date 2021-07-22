
#include <stdio.h>

int main() {

    //반복 횟수를 결정하는 변수
    int count;

    printf("반복할 횟수를 입력하세요 : ");
    scanf("%d", &count);

    for (int i = 1; i <= count; i++ ) {
        printf("%d ", i);
    }

    printf("\n====================\n");


    for (int i = count; i >= 1; i-- ) {
        printf("%d ", i);
    }

    return 0;
}

