#include <stdio.h>

// 함수에서 배열을 매개변수로 사용하기

void printArray(int arr[], int count){
  for(int i = 0; i < count; i++){
    printf("arr[%d] : %d\n", i, arr[i]);
  }
  printf("\n");
}
int main(){

  int arrNums[10] = {1,2,3,4,5,6,7,8,9,10};

  printArray(arrNums, sizeof(arrNums) / sizeof(int));
  return 0;
}
