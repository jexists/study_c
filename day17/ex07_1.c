#include <stdio.h>

int operate(int n1, int n2, int n3){

   int r1 = n1 + n2 + n3;
   int r2 = n1 + n2 - n3;
   int r3 = n1 * n2 - n3;

   return r1 + r2 + r3;
}


// 매개변수로 포인터를 사용하기

void swapNumber2(int *first, int *second){

    printf("-- swapNumber2 함수 실행 시작--\n");

    int cup;

    printf("-- swap 전 --\n");
    printf("*first in swapNumber2 : %d\n", *first);  // 22
    printf("*second in swapNumber2 : %d\n", *second);  // 11


    cup = *first;
    *first = *second;
    *second = cup;

    printf("-- swap 후 --\n");
    printf("*first in swapNumber2 : %d\n", *first);  // 22
    printf("*second in swapNumber2 : %d\n", *second);  // 11

    printf("-- swapNumber2 함수 실행 종료--\n");

        // return;
}

void swapNumber(int first, int second){
    int cup;

    printf("-- swapNumber 함수 실행 시작--\n");

    printf("-- swap 전 --\n");
    printf("first in swapNumber : %d\n", first);  // 11
    printf("second in swapNumber : %d\n", second);  // 22

    cup = first;
    first = second;
    second = cup;

    printf("-- swap 후 --\n");
    printf("first in swapNumber : %d\n", first);  // 22
    printf("second in swapNumber : %d\n", second);  // 11

    printf("-- swapNumber 함수 실행 종료--\n");

     // return;
}

int main(){

  int first = 11;
  int second = 22;

  printf("-- swapNumber(int first, int second) 실행 전 --\n");
  printf("first in main : %d\n", first);  // 11
  printf("second in main : %d\n", second);  // 22

  swapNumber(first, second);

  printf("-- swapNumber(int first, int second) 실행 후 --\n");
  printf("first in main : %d\n", first);  // 22
  printf("second in main : %d\n", second);  // 11


  printf("\n===============================\n\n");


  printf("-- swapNumber2(int *first, int *second) 실행 전 --\n");
  printf("first in main : %d\n", first);  // 11
  printf("second in main : %d\n", second);  // 22

  swapNumber2(&first, &second);

  printf("-- swapNumber2(int *first, int *second) 실행 후 --\n");
  printf("first in main : %d\n", first);  // 22
  printf("second in main : %d\n", second);  // 11



  return 0;
}
