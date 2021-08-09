
#include <stdio.h>
#include <string.h>

int main() {

    //문자열을 하나씩 이동하면서 2글자씩 출력

    char text[30]="hello";
    int length;

    length = strlen(text);

    //2글자씩 출력하므로
    //문자열의 끝에서 한글자 앞까지만 반복함

    for(int i = 0; i < length -1; i++) {


        printf("%c%c\n", text[i], text[i+1]);
    }


    printf("----------------------\n");


    for(int i = 0; i < length -2; i++) {


        printf("%c%c%c\n", text[i], text[i+1], text[i+2]);
    }

    printf("----------------------\n");


    return 0;
}

