#include <stdio.h>

#define SIZE 9
//기호화 상수

int main() {

    //%u: unsigned(decimal) integer
    //부호없는 십진수 정수
    char name[SIZE] = "이 름 좌";
	//문자열할땐 큰따음표 사용
    printf("name: %s\n", name);
    printf("&name[0]: %s\n", &name[0]);
    printf("\t 주소\n\t name == &name[0] \n");
    printf("name: %u\t", name);

    printf("&name[0]: %u\n", &name[0]);

/*
char name[9] -> 크기가 9개인 배열 생성
name: 배열의 이름(배열명) ==  배열의 시작 주소 == &name[0]
9: 배열의 크기 == 배열 요소의 개수
name[0]~name[8]의 공간이 연속으로 이어져 있음

%s: 저장된 모든 문자 출력  => 문자열
-> 마지막 전('\0': null 문자)까지의 모든 문자 출력
%u: 배열의 주소 출력 (부호없는 십진수)
*/
    return 0;
}
