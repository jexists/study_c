



#include <stdio.h>
#include <string.h>

// 함수 포인터 배열

int add(int n1, int n2) {
    return n1 + n2;
}

int sub(int n1, int n2) {
    return n1 - n2;
}

int mul(int n1, int n2) {
    return n1 * n2;
}

int div(int n1, int n2) {
    return n1 / n2;
}

int main() {


    int functionNumber;

    int number1, number2;

    //함수포인터

    int(*pointer[4])(int, int);

    pointer[0] = add;
    pointer[1] = sub;
    pointer[2] = mul;
    pointer[3] = div;

    printf("함수 번호와 계산할 값을 입력하세요 :");

    scanf("%d %d %d", &functionNumber, &number1, &number2);



    printf("result: %d\n", pointer[functionNumber](number1, number2));




    printf("------------\n");


    return 0;
}

