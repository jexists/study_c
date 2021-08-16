#include <stdio.h>

int main(){

  int num = 10;

  printf("num 변수에 저장(할당)된 값 출력하기\n");
  printf("num : %d\n", num);

  printf("num 변수의 주소 출력하기\n");
  printf("num : %p\n\n\n", &num);

  printf("C언어에서 메모리 주소는 포인터(pointer) 변수에 저장함\n");
  printf("포인터 변수는 *를 사용해서 선언함\n ");
  printf("포인터 변수는 줄임말로 포인터라고도 함\n");
  printf("\n자료형(data type) *포인터(변수) 이름;\n");
  printf("포인터(변수) = &(일반)변수\n\n");


  int *numberPointer;  // 포인터 변수 선언
  int number = 11;      // (일반) 변수 선언

  // number 라는 이름표(변수)가 붙은 메모리 공간의 주소를 할당함
  numberPointer = &number;

  printf("number : %d\n", number);
  printf("number(주소) : %p\n", numberPointer);
  printf("number(주소) : %p\n", &number);

  return 0;
}
