#include <stdio.h>

int main(){

  // 배열의 모든 요소 를  0 으로 초기화하기

  int arrNums[10] = {0,};

  for(int i = 0; i < 10; i++){
    arrNums[i] = 0;
  }


  for(int i = 0; i < 10; i++){
    printf("arrNums[%d] : %d\n", i, arrNums[i]);
  }
  printf("----------------------------------\n");


  for(int i = 0; i < 10; i++){
    arrNums[i] = 10;
    printf("arrNums[%d] : %d\n", i, arrNums[i]);
  }
  printf("----------------------------------\n");

  int number = 10;
  for(int i = 0; i < 10; i++){
    arrNums[i] = ++number;
    printf("arrNums[%d] : %d\n", i, arrNums[i]);
  }
  printf("----------------------------------\n");

  number = 11;
  for(int i = 0; i < 10; i++){
    arrNums[i] = number++;
    printf("arrNums[%d] : %d\n", i, arrNums[i]);
  }
  printf("----------------------------------\n");



  return 0;
}
