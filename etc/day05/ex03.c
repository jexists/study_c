#include <stdio.h>

int main(){

  unsigned char num1 = 240;
  unsigned char num2 = 15;

  unsigned char num3, num4;

  // num1 �� bit�� �������� 2�� �̵���
  num3 = num1 << 2;

  // num2 �� bit�� ���������� 2�� �̵���
  num4 = num2 >> 2;

  printf("num3 : %d\n", num3);  // 192
  printf("num4 : %d\n", num4);  //    3

  return 0;
}







