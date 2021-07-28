

#include <stdio.h>

int main() {

    int number = 12345;
    int mod = 0;
    int sum = 0;

    mod = number % 10; //5
    sum = sum + mod; //5

    number = number / 10; //1234
    mod = number % 10; //4
    sum = sum + mod; //9

    number = number / 10; //123
    mod = number % 10; //3
    sum = sum + mod; //12

    number = number / 10; //12
    mod = number % 10; //2
    sum = sum + mod; //14

    number = number / 10; //1
    mod = number % 10; //1
    sum = sum + mod; //15

    number = number / 10; //0

    printf("-----------------------------\n");

    printf("sum :%d \n", sum);
    return 0;
}
