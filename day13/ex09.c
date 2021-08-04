
#include <stdio.h>
#include <string.h> //strlen() 함수가 정의되어 있는 헤더파일
int main(){

    //문자열 길이 구하기

    char *str1 = "Hello";
    char str2[10] = "goodbye";

    printf("%d\n", strlen(str1)); //5
    printf("%d\n", strlen(str2)); //5


    printf("%d\n", sizeof(str1)); //8
    printf("%d\n", sizeof(str2)); //10

    printf("--------------------------------------\n");

    printf("두 문자열이 같은지 비교하기\n");

    //strcmp(문자열1, 문자열2);
    //두 문자열의 길이가 같으면 0 반환
    //문자열 1이 문자열 2보다 크면 1 반환
    //문자열 1이 문자열 2보다 작으면 -1 반환
    int result = strcmp(str1, str2);

    printf("result: %d \n", result);

    printf("--------------------------------------\n");

    printf("result: %d \n", strcmp("aaa","aaa")); //0
    printf("result: %d \n", strcmp("aaa","aab")); //-1
    printf("result: %d \n", strcmp("aab","aaa")); //1
    printf("result: %d \n", strcmp("aaa","aaA")); //1
    printf("result: %d \n", strcmp("aAa","aaA")); //-1

    return 0;
}
