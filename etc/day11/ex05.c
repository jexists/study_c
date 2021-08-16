#include <stdio.h>

int main(){

  int arrNums[7] = {98, 67, 79, 84, 85, 94, 92};

  // 7 명 학생들의 성적의 총합을 구하세요

  int total = 0;
  float average = 0.0F;

  for(int i = 0; i < sizeof(arrNums) / sizeof(int); i++){
    total += arrNums[i];
  }

  average = total / (sizeof(arrNums) / sizeof(int));

  printf("총점 : %d 점\n", total);
  printf("평균 : %.2f 점\n", average);

  return 0;
}
