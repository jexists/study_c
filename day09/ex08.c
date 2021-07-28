
#include <stdio.h>

int main() {

    int number = 10;

    printf("number: 변수에 저장(할당) 된 값 출력하기 \n");
    printf("number: %d \n", number);
    printf("number: 변수의 주소 출력하기 \n");
    printf("number: %p \n\n\n\n", &number);

    printf("c언어에서 메모리 주소는 포인터 (pointer) 변수에 저장함\n");
    printf("포인터 변수는 *를 사용해서 선언함\n");
    printf("포인터 변수는 줄임말로 포인터라고 한다.\n");
    printf("\n 자료형(data type) *포인터(변수) 이름;\n");
    printf("포인터(변수) = &(일반)변수\n\n");

    int *numberPointer; //포인터 변수 선언
    int num = 11; //(일반) 변수 선언
    //num라는 이름표(변수)가 붙은 메모리 공간의 주소를 할당함

    numberPointer = &num;

    printf("num: %d\n", num);
    printf("num(주소): %p\n", numberPointer);
    printf("num(주소): %p\n", &num);

    return 0;
}
