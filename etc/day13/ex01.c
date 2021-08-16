#include <stdio.h>

int main(){
  int size;

  printf("배열의 크기를 입력하세요 : ");
  scanf("%d",&size);

  int arrNums[size];

  printf("sizeof(arrNums) : %d\n", sizeof(arrNums));
  printf("arrNums 배열의 요소의 개수 : %d 개\n", sizeof(arrNums) / sizeof(int));

  return 0;
}
