#include <stdio.h>

int main(){

  int arrNums[7] = {98, 67, 79, 84, 85, 94, 92};

  // 7 �� �л����� ������ ������ ���ϼ���

  int total = 0;
  float average = 0.0F;

  for(int i = 0; i < sizeof(arrNums) / sizeof(int); i++){
    total += arrNums[i];
  }

  average = total / (sizeof(arrNums) / sizeof(int));

  printf("���� : %d ��\n", total);
  printf("��� : %.2f ��\n", average);

  return 0;
}
