#include <stdio.h>
#include <stdbool.h>

int one(){
  return 111;
}

float realNumber(){
  return 1.2367F;
}

bool functionLogical(){
  return true;
}

int float2int(){
  float fNum = 1.234F;
  return (int)fNum;

}

int add(int n1, int n2){
  int result = n1 + n2;
  return result;
}

int main(){

  int number1;
  float fNumber1;
  bool b1;
  int castingNumber;

  number1 = one();
  printf("number1 : %d\n", number1);

  fNumber1 = realNumber();
  printf("fNumber1 : %.4f\n", fNumber1);

  b1 = functionLogical();
  printf("b1 : %d\n", b1);

  castingNumber = float2int();
  printf("casti ngNumber : %d\n", castingNumber);

  int resultNumber = add(111, 222);
  printf("resultNumber : %d\n", resultNumber);


  return 0;
}
