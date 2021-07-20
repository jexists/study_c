
#include <stdio.h>

int main() {

    int num1 = 10; // 1 0 1 0
    int num2 = 5;  // 0 1 0 1

    int result = num1 & num2;
    printf("result: %d\n", result); //0
    //  1 0 1 0
    //  0 1 0 1
    //& 0 0 0 0 => 0 (&&)


    result = num1 | num2;
    printf("result: %d\n", result); //15
    //  1 0 1 0
    //  0 1 0 1
    //| 1 1 1 1 => 15 (||)


    result = num1 ^ num2;
    printf("result: %d\n", result); //15
    //  1 0 1 0
    //  0 1 0 1
    //^ 1 1 1 1 => 15 (두개가 다를경우 1)

    result = ~num1 & num2;
    printf("result: %d\n", result); //5
    //~ 1 0 1 0 => 0 1 0 1
    //  0 1 0 1    0 1 0 1
    //&            0 1 0 1  => 5 (두개가 다를경우 1)


    return 0;
}
