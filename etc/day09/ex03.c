#include <stdio.h>

int main(){

  // int type 변수 number 를 선언하고
  // 네 자리수를 할당 한 후
  // 각 자리수의 합을 출력하는
  // 프로그램을 작성하세요
  //  number 에 12345 를 할당한 경우에는
  //  (1 + 2 + 3 + 4 + 5) -> 15  를 출력함

  // 12345
  // 십진수를 % 10 연산을 하면
  // 1의 자리수를 얻음

    int number = 12345;
    int mod = 0;
    int div = 0 ;
    int sum = 0;

    // number : 12345
    mod = number % 10;  // 5
    sum = sum + mod;   // 5

    number = number / 10;  // number : 1234
    mod = number % 10;  // 4
    sum = sum + mod;   // 9

    number = number / 10;  // number : 123
    mod = number % 10;  // 3
    sum = sum + mod;   // 12

    number = number / 10;  // number : 12
    mod = number % 10;  // 2
    sum = sum + mod;   // 14

    number = number / 10;  // number : 1
    mod = number % 10;  // 1
    sum = sum + mod;   // 15

    number = number / 10;  // number : 0

    printf("sum : %d\n", sum);


  return 0;
}
