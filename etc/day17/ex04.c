#include <stdio.h>
#include <string.h> // strcpy()

union Box{
  short candy;  // 2 byte
  float snack;   // 4 byte
  char doll[8];  // 8byte
};

int main(){

  // 공융체 변수 선언
  union Box box1;

  printf("공용체 box1의 크기 : %d\n", sizeof(box1)); // 8

  box1.candy = 10;
  printf("candy : %d\n", box1.candy);

  box1.snack = 2.35421F;
  printf("snack : %.2f\n", box1.snack);

  strcpy(box1.doll, "tjoeun");
  printf("doll    : %s\n", box1.doll);


  return 0;
}



