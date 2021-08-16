#include <stdio.h>
#include <stdbool.h>

int main(){

  bool b1;

  // ! > && > ||
  b1 = (false || false) && !false || false;

  printf("b1 : %d\n", b1);
  printf("--------------------------------\n");

  int num1;

  // (< ) > (==)
  num1 = 5 == 5 < 10;
  printf("num1 : %d\n", num1);
  printf("--------------------------------\n");


  int n1 = 1;
  int n2 = 2;
  int n3;

  // 산술연산자 > 시프트연산
  n3 = n1 << (2 + n2) << 1;
  // n1(1) << 4 << 1
  printf("n3 : %d\n", n3);  // 32
  printf("--------------------------------\n");

  int number1 = 1;
  int number2 = 2;
  int number3;

  number3 = (number1 << 2) + (number2 << 1);
  printf("number3 : %d\n", number3);

  return 0;
}
