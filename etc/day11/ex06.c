#include <stdio.h>

int main(){

  int scores[5] = {98, 86, 90, 72, 88};

  // �迭���� scores �� ���� ������ �����ϴ� ���� �ƴ϶�
  // ���� �� {98, 86, 90, 72, 88} �� ����� ����
  // �ּҸ� ������

  int *scoresPointer = scores;

  // 000000000061FE00
  printf("scores         : %p\n", scores);
  printf("scoresPointer  : %p\n",  scoresPointer);
  printf("*scoresPointer : %d\n", *scoresPointer);
  // *scoresPointer : 98

  printf("*scores        : %d\n", *scores);


  printf("sizeof(scores) : %d\n", sizeof(scores));
  printf("sizeof(scoresPointer)  : %d\n",  sizeof(scoresPointer));
    /*
    sizeof(scores) : 20 byte
    sizeof(scoresPointer)  : 8 byte
    */
  return 0;
}






