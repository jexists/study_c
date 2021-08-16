#include <stdio.h>

int operate(int n1, int n2, int n3){

   int r1 = n1 + n2 + n3;
   int r2 = n1 + n2 - n3;
   int r3 = n1 * n2 - n3;

   return r1 + r2 + r3;
}


// �Ű������� �����͸� ����ϱ�

void swapNumber2(int *first, int *second){

    printf("-- swapNumber2 �Լ� ���� ����--\n");

    int cup;

    printf("-- swap �� --\n");
    printf("*first in swapNumber2 : %d\n", *first);  // 22
    printf("*second in swapNumber2 : %d\n", *second);  // 11


    cup = *first;
    *first = *second;
    *second = cup;

    printf("-- swap �� --\n");
    printf("*first in swapNumber2 : %d\n", *first);  // 22
    printf("*second in swapNumber2 : %d\n", *second);  // 11

    printf("-- swapNumber2 �Լ� ���� ����--\n");

        // return;
}

void swapNumber(int first, int second){
    int cup;

    printf("-- swapNumber �Լ� ���� ����--\n");

    printf("-- swap �� --\n");
    printf("first in swapNumber : %d\n", first);  // 11
    printf("second in swapNumber : %d\n", second);  // 22

    cup = first;
    first = second;
    second = cup;

    printf("-- swap �� --\n");
    printf("first in swapNumber : %d\n", first);  // 22
    printf("second in swapNumber : %d\n", second);  // 11

    printf("-- swapNumber �Լ� ���� ����--\n");

     // return;
}

int main(){

  int first = 11;
  int second = 22;

  printf("-- swapNumber(int first, int second) ���� �� --\n");
  printf("first in main : %d\n", first);  // 11
  printf("second in main : %d\n", second);  // 22

  swapNumber(first, second);

  printf("-- swapNumber(int first, int second) ���� �� --\n");
  printf("first in main : %d\n", first);  // 22
  printf("second in main : %d\n", second);  // 11


  printf("\n===============================\n\n");


  printf("-- swapNumber2(int *first, int *second) ���� �� --\n");
  printf("first in main : %d\n", first);  // 11
  printf("second in main : %d\n", second);  // 22

  swapNumber2(&first, &second);

  printf("-- swapNumber2(int *first, int *second) ���� �� --\n");
  printf("first in main : %d\n", first);  // 22
  printf("second in main : %d\n", second);  // 11



  return 0;
}
