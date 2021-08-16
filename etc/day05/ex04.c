#include <stdio.h>

int main(){

  unsigned char num1 = 131;
                  char num2 = -125;

  unsigned char num3;
                  char num4;

  // num1 의 bit를 오른쪽으로 5 번 이동하기
  num3 = num1 >> 5;

  // num2 의 bit를 오른쪽으로 5 번 이동하기
  num4 = num2 >> 5;

  printf("num3 : %u\n", num3); // 4
  printf("num4 : %d\n", num4); // -4

  return 0;
}

