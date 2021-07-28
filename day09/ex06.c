
#include <stdio.h>

int main() {
    //문자열에 숫자만 저장되어있는 알아보기

    char number[16] = "12O34";
    char ch = ' ';
    int flag = 1;

    for (int i = 0; i < 5; i++) {
        ch = number[i];
        if (!('0' <= ch && ch <= '9')) {
            flag = 0;
            break;
        }
    }

    if(flag) {
        printf("%s는 숫자입니다.\n", number);
    } else {
        printf("%s는 숫자가 아닙니다. \n", number);
    }
    return 0;
}
