#include <stdio.h>

int main() {
    /*
    num에 저장된 숫자보다 크면서도 가장 가까운 10의 배수에서 num의 값을 뺀 나머지를 구하는 코드 작성
    24보면 크면서도 가장 가까운 10의 배수는 30 = 6
    19보면 크면서도 가장 가까운 10의 배수는 20 = 1
    81보면 크면서도 가장 가까운 10의 배수는 90 = 9
    */

    /*
    int number;
    printf("십의 자리 정수를 입력하세요 : ");
    scanf("%d", &number);
    printf("number: %d \n : ", (number / 10 + 1) * 10 - number);

    printf("----------------------------------\n");
    */
    int number;
    printf("십의 자리 정수를 입력하세요 : ");
    scanf("%d", &number);
    printf("number: %d \n : ", 10 - (number % 10));

    return 0;
}
