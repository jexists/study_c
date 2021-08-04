
#include <stdio.h>

int main(){

    /*
    getchar() 함수
    1) 문자열이나 문자를 입력받음
    */

    char ch;

    //printf("문자열을 입력하세요 : ");

    ch = getchar();
    ch = getchar();
    printf("ch: %c\n", ch);
    return 0;
}
