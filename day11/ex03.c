#include <stdio.h>

int main(){

  // �迭�� ��� ��� ��  0 ���� �ʱ�ȭ�ϱ�

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
