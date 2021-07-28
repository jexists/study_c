#include <stdio.h>

int main() {
    //회문: palindrome (거꾸로 읽어도 앞으로 읽어도 같은 숫자)

    int number = 12321;
    int temp = number;
    int reverseNum = 0;


    printf("숫자를 입력해주세요 \n");
    scanf("%d", &number);

    while(temp != 0) {
        reverseNum = reverseNum * 10 + temp % 10;
        temp = temp /10;
    }

    if (number == reverseNum) {
        printf("%d 는 회문수 입니다.\n", number);
    } else {
        printf("%d 는 회문수가 아닙니다.\n", number);
    }
    return 0;
}

