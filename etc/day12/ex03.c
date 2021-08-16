#include <stdio.h>

int main(){

  int arrNum[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  // 포인터변수(numPointer) 에 배열의 수솟값을 저장(할당)함
  int *numPointer = arrNum;

  // 배열변수 arrNum 이 저장하고 있는 주소는
  // 배열의 data 중에서 제일 첫 번째 data가 저장된
  // 공간의 주소 (1이 저장된 공간의 주소)
  // 포인터 (numPointer) 가 저장하고 있는 주소는
  // 배열의 data 중에서 제일 첫 번째 data가 저장된
  // 공간의 주소 (1이 저장된 공간의 주소)
  // 포인터 이름 앞에 * 표를 하면
  // 포인터가 저장하고 있는 주소지 속에 있는 data값을 알게 됨
  printf("*numPointer : %d\n", *numPointer);  // 1

  printf("*arrNum : %d\n", *arrNum); // 1

  // arrNum[5] : 6
  printf("arrNum[5] : %d\n", arrNum[5]);

  // numPointer[5] : 6
  printf("numPointer[5] : %d\n", numPointer[5]);

  printf("sizeof(arrNum) : %d\n", sizeof(arrNum));
  printf("sizeof(numPointer) : %d\n", sizeof(numPointer));

  // sizeof(arrNum) : 40 byte
  // sizeof(numPointer) : 8 byte


  return 0;
}
