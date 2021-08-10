#include <stdio.h>


//void: return type - return하는 값의 type
//      return value(값)이 없는 경우 void 사용
//hello 함수이름
//() 매개변수부 = 매개변수를 선언하지 않는 경우에는 비워놓음

//함수 정의부(definition - define): return type + 함수이름 + 매개변수부
//void hello() (함수의 맨 첫째줄)-함수의 선언부
//{} - 함수의 body (몸통-구현부): 함수가 하는 일을 적어놓은 부분
// 함수의 실행을 마치면 그 함수를 호출한 곳으로 프로그램의 흐름이 돌아감

//함수는 호출을 해야 실행 됨
// 함수를 호출(실행)하는 방법:
//함수이름(매개변수에 전달할 값을 넣어줌);

void hello() { //parameter : 매개변수


    printf("hello, programming!!!!\n");

    int number = 11;

    printf("number in hello(): %d\n", number);

    return; //생략가능
}

//int number; //전역변수

int main() {

    printf("프로그램 시작!!!!\n");

    hello(); //argument 인자, 인자값, 인수
    //hello();

    //int number; //지역변수 (local variable)

    printf("==========================\n");
    //printf("number in main(): %d\n", number);

    printf("프로그램 종료!!!!\n");
    return 0;

}
