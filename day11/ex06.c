#include <stdio.h>

int main(){

  int scores[5] = {98, 86, 90, 72, 88};

  // 배열변수 scores 는 실제 값들을 저장하는 것이 아니라
  // 실제 값 {98, 86, 90, 72, 88} 이 저장된 곳의
  // 주소를 저장함

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






