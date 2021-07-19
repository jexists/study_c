#include <stdio.h>

int main() {
    /*
    333 입력 = 331
    777 입력 = 771
    출력하는 프로그램 작성
    */


    /*
    int number;
    printf("백의 자리 정수를 입력하세요 : ");
    scanf("%d", &number);
    number = number - (number / 100 - 1);
    printf("number: %d \n : ", number);
    printf("----------------------------------\n");
    */


    int number;
    printf("백의 자리 정수를 입력하세요 : ");
    scanf("%d", &number);
    printf("number: %d \n : ", number / 10 * 10 + 1);



    return 0;
}
