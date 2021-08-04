


#include <stdio.h>

int main(){


    printf("-------------공백이 있는 문자열 입력 받기-------------\n");

    char str4[10];
    printf("문자열을 입력하세요: ");
    scanf("%[^\n]s", str4);

    printf("입력하신 문자열은 %s 입니다.\n", str4);

    return 0;
}
