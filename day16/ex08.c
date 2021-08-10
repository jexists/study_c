
#include <stdio.h>

//return-type *함수이름() { return 반환값; }

int *addressMemory() {
    int number1 = 123;
    // number1 은 addressMemory()함수 안에서만 사용할 수 있는
    // 지역변수임 - addressMemory()함수가 실행을 종료하면
    //addressMemory()함수가 실행하기 위해서 확보했던
    //메모리 공간이 없어짐 <-- int number1 도 없어짐
    //number1의 주소를 반환하면
    //없어진 int number1의 주소를 반환하므로
    //그주소를 찾지 못함


    return &number1;
}

int main() {

    int *intPointer;

    intPointer = addressMemory();

    printf("intPointer: %p\n", intPointer); //NOTWORKING
    printf("*intPointer: %d\n", *intPointer); //NOTWORKING

    return 0;
}
