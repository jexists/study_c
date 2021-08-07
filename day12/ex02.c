#include <stdio.h>
#include <stdlib.h>

int main(){

  // 이중 포인터(int 포인터 크기 * 3)
  int **p = malloc(sizeof(int *) * 3);
                                // 행(줄) 의 개수

  // 열(칸) 의 개수  : 행(줄)의 개수만큼 반복
  for(int i = 0; i < 3; i++){
    p[i] = malloc(sizeof(int) * 4);
  }


  p[0][0] = 1;
  p[2][0] = 5;
  p[2][3] = 2;


  printf("p[0][0] : %d\n", p[0][0]);
  printf("p[2][0] : %d\n", p[2][0]);
  printf("p[2][3] : %d\n", p[2][3]);

  //  행(줄)의 크기만큼 반복
  for(int i = 0; i < 3; i++){
     // 2차원 배열의  열(칸) 의 크기만큼 메모리 해제
    free(p[i]);
  }


   free(p);  // 2 차원 배열의 행(줄) 공간 메모리 해제

  return 0;
}




