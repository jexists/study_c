
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1 = -1;
    int num2;

    //조건식, true, false (논리)
    //숫자형 자료(값) 0 => false
    //숫자형 자료(값) 0아닐경우 (+,-) => true
    if(num1) {  //true
        num2 = 222;
    } else {
        num2 = 333;
    }

    printf("num2: %d\n", num2);

    // 삼항연산자
    // 조건식 ? 조건식이 참인 경우 : 조건식이 거짓인 경우;

    num1 ? 222 : 333;

    printf("num2: %d\n", num2);

    num2 = (num1 == 10) ? 222 : 333;

    printf("num2: %d\n", num2);

    return 0;
}
