#include <stdio.h>
#include <string.h> // strcpy()

union Box{
  short candy;  // 2 byte
  float snack;   // 4 byte
  char doll[8];  // 8byte
};

int main(){

  // ����ü ���� ����
  union Box box1;

  printf("����ü box1�� ũ�� : %d\n", sizeof(box1)); // 8

  box1.candy = 10;
  printf("candy : %d\n", box1.candy);

  box1.snack = 2.35421F;
  printf("snack : %.2f\n", box1.snack);

  strcpy(box1.doll, "tjoeun");
  printf("doll    : %s\n", box1.doll);


  return 0;
}



