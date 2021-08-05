


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    //문자열 자르기
    //token 단위로 자름
    //strtok(대상문자열, 기준문자)

    char s1[30] = "Tjoeun it Academy";


    char *pointer1 = strtok(s1, " ");

    //잘라낸 문자열이 나오지 않을 때까지 반복
    // => 잘라낸 문자열이 나온 동안에만 반복
    while(pointer1 != NULL) {
        //잘라낸 문자열 출력하기
        printf("pointer1: %s\n", pointer1);
        //다음 문자열을 잘라서 포인터를 반환함
        //NULL값으로 지정하면 바로 직전에 strtok 함수에서 처리했던
        //문자열에서 잘린 문자열 만큼 다음 문자로 이동한 후 다음 문자열을 자르게 됨
        pointer1 = strtok(NULL, " ");
    }

    printf("-----------------\n");

    /*
    char *s2 = "Tjoeun it Academy";

    char *pointer2 = strtok(s2, " "); //ERROR

    while(pointer2 != NULL) {
        printf("pointer2: %s\n", pointer2);
        pointer2 = strtok(NULL, " ");
    }
    */

    printf("-----------------\n");

    char *s3 = malloc(sizeof(char) * 30);

    strcpy(s3, "Tjoeun it Academy");

    char *pointer3 = strtok(s3, " ");

    while(pointer3 != NULL) {
        printf("pointer3: %s\n", pointer3);
        pointer3 = strtok(NULL, " ");

    }

    free(s3);

    printf("-----------------\n");

    // 날짜와 시간 값 자르기

    char s4[30] = "2021-08-05T20:51:22";

    char *pointer4 = strtok(s4, "-T:");

    while(pointer4 != NULL) {
        printf("pointer4: %s\n", pointer4);
        pointer4 = strtok(NULL, "-T:");
    }

     printf("-----------------\n");

    // 날짜와 시간 값 자르기

    char s5[30] = "Tjoeun it Academy";

    //포인터 배열: 포인터(변수)들을 저장하는 배열
    char *pointerArray[10] = {NULL, };

    int i = 0;

    char *pointer5 = strtok(s5, " ");


    while(pointer5 != NULL) {
        pointerArray[i] = pointer5;
        i++;

        //printf("pointer5: %s\n", pointer5);
        // 다음 문자열을 잘라서 포인터 반환
        pointer5 = strtok(NULL, " ");
    }

    for (int j = 0; j < 10; j++) {
        if(pointerArray[j] != NULL){
            printf("%s\n", pointerArray[j]);
        }
    }


    return 0;
}
