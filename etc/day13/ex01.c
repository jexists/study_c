#include <stdio.h>

int main(){
  int size;

  printf("�迭�� ũ�⸦ �Է��ϼ��� : ");
  scanf("%d",&size);

  int arrNums[size];

  printf("sizeof(arrNums) : %d\n", sizeof(arrNums));
  printf("arrNums �迭�� ����� ���� : %d ��\n", sizeof(arrNums) / sizeof(int));

  return 0;
}
