
#include <stdio.h>

int operate(int n1, int n2, int n3) {

    int r1 = n1 + n2 + n3;
    int r2 = n1 + n2 - n3;
    int r3 = n1 * n2 - n3;

    //return r1, r2, r3;
}

//매개 변수로 포인터를 사용하기

int swapNumber(int first, int second) {
    int cup;
    //int first = first;
    //int second = second;


    printf("swapNumber() 내부 실행 전\n");

    printf("first: %d\n", first);
    printf("second: %d\n", second);


    cup = first;
    first = second;
    second = cup;



    printf("swapNumber() 내부 실행 후\n");

    printf("first: %d\n", first);
    printf("second: %d\n", second);



    return first;
    //printf("first: %d\n", first);
    //printf("second: %d\n", second);

}

int swapNumber2(int *first, int *second) {
    int cup;

    cup = *first;
    *first = *second;
    *second = cup;

    return first;

}

int main() {

    operate(1, 2, 3);

    int first = 11;
    int second = 22;


    printf("swapNumber() 메인 실행 전\n");

    printf("first: %d\n", first);
    printf("second: %d\n", second);

    swapNumber(first, second);

    int returnFirst = swapNumber(first, second);


    printf("swapNumber() 메인 실행 후\n");

    printf("first: %d\n", first);
    printf("second: %d\n", second);

    printf("returnFirst: %d\n", returnFirst);




    printf("주소로 변경햇을 때..----------------------\n");


    printf("swapNumber() 메인 실행 전\n");

    printf("first: %d\n", first);
    printf("second: %d\n", second);

    swapNumber2(&first, &second);


    printf("swapNumber() 메인 실행 후\n");

    printf("first: %d\n", first);
    printf("second: %d\n", second);
}
