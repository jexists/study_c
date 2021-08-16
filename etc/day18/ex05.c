#include <stdio.h>

void swapElement(int arr[], int idx1, int idx2){
  int cup;

  cup = arr[idx1];
  arr[idx1] = arr[idx2];
  arr[idx2] = cup;
}

void printArray(int arrNums[], int size){
  for(int i = 0; i < size; i++){
    printf("%d ", arrNums[i]);
  }
  printf("\n-----------------------\n");
}

int main(){
  int arrNums[5] = {1, 2, 3, 4, 5};
  int arrSize = sizeof(arrNums) / sizeof(int);

  printf("arrSize : %d\n", arrSize);

  printf("-- swapElement() �Լ� ȣ�� �� --\n");
  printArray(arrNums, arrSize);

  // arrNums �迭 �ε��� 0 ��° �� �ε��� 1 ��° �����Ͱ� ���� �ٲ�
  swapElement(arrNums, 0, 4);

  printf("-- swapElement() �Լ� ȣ�� �� --\n");
  printArray(arrNums, arrSize);

  return 0;
}
