
#include <stdio.h>


//함수의 선언
void hello(); //ERRPR


int main() {

    printf("프로그램 시작!!!!\n");

    //hello();

    printf("==========================\n");
    printf("프로그램 종료!!!!\n");
    return 0;

}


//함수의 정의
void hello() { //함수의 헤더
    printf("hello, world\n"); //함수의 본체:{}부분
}
