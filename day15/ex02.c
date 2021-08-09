
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    //회문 인지 아닌지 확인 (palindrome)

    //단어를 저장하는 배열 선언
    char word[30];

    //문자열의 길이 저장하는 변수

    int length;
    //회문인지 아닌지 결과값 (true/false)을 저장하는 변수

    bool isPalindrome = true;

    printf("단어를 입력하세요 : ");
    scanf("%s", word);

    //배열 word에 저장된 문자열의 길이 구하기

    length = strlen(word);

    //0부터 문자열 길이의 절반 만큼만 반복하기
    //한글자라도 같지 않으면 회문이 아님
    for (int i = 0; i < length / 2; i++) {
        //왼쪽 문자열과 오른쪽 문자열 비교하여
        //다를 경우에는 회문이 아니고 , 같으면 회문임

        if(word[i]!= word[length-1 - i]) {
            //회문이 아닌 경우
            isPalindrome = false;
            break;
            //자신을 포함하고 있는 {}를 하나 벗어남
            //if의 {}는 제외함
        }//if


    }//for


    if(isPalindrome) {
        printf("회문입니다\n ");
    } else {
        printf("회문아닙니다\n ");
    }
    printf("----------------------\n");


    return 0;
}
