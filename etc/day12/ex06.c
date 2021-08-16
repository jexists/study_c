#include <stdio.h>

int main(){

  // int type 의 3행 4열의 이차원 배열
  int arrNums[3][4] = {
                                    {11, 12, 13, 14},
                                    {15, 16, 17, 18},
                                    {19, 20, 21, 22}
                                  };

  int **numsPointer = arrNums;

  printf("arrNums[0][0] : %d\n", arrNums[0][0]);
  printf("arrNums[1][1] : %d\n", arrNums[1][1]);
  printf("arrNums[2][2] : %d\n", arrNums[2][2]);
  printf("---------------------------\n");

  // int type 의 포인터 4 개를 담는 배열
  // 포인터(변수) 로 이루어진 배열
  int num1, num2, num3, num4;
  int *nPointer[4] = {&num1, &num2, &num3, &num4};


  // 2차원배열의 포인터를 저장하는 방법
  // 자료형(*포인터변수이름)[열의크기]
  int (*numsPointer2)[4] = arrNums;

  printf("*arrNums   : %p\n", *arrNums);
  printf("*numsPointer2 : %p\n", *numsPointer2);

  printf("numsPointer2[2][1] : %d\n", numsPointer2[2][1]);
  printf("arrNums[2][1] : %d\n", arrNums[2][1]);

  printf("sizeof(arrNums) : %d\n", sizeof(arrNums));
  printf("sizeof(numsPointer2) : %d\n", sizeof(numsPointer2));

  int n[3] = {1, 2, 3};
  printf("*n(주소지에 저장된 값) : %d\n", *n);  // 주소지에 저장된 값
  printf("n(일차원 배열의 주솟값) : %d\n", n);      // 일차원 배열의 주솟값


  return 0;
}
